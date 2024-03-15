#include <stdio.h>

void merge(int data[], int p, int q, int r) {
    int i = p, j = q+1, k = p;
    int tmp[1000000];
    while(i<=q && j<=r) {
        if(data[i] <= data[j])
			tmp[k++] = data[i++];
        else
			tmp[k++] = data[j++];
    }
    while(i <= q)
		tmp[k++] = data[i++];
    while(j <= r)
		tmp[k++] = data[j++];
    for(int a = p; a<=r; a++)
		data[a] = tmp[a];
}
void mergeSort(int data[], int p, int r) {
    int q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(data, p , q);
        mergeSort(data, q+1, r);
        merge(data, p, q, r);
    }
}
int main(){
	int len;
	int arr[1000000] = {0, };
	int i;
	int tmp;

	scanf("%d", &len);
	i = 0;
	while(i < len){
		scanf("%d", &arr[i]);
		i++;
	}
	mergeSort(arr, 0, len - 1);
	i = 0;
	while(i < len){
		printf("%d\n", arr[i]);
		i++;
	}
}