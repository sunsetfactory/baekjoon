#include <stdio.h>

typedef struct data
{
	int age;
	char name[101];
}DATA;

void merge(DATA data[], int p, int q, int r) {
    int i = p, j = q + 1, k = p;
    DATA tmp[100000];
    while(i<=q && j<=r) {
        if(data[i].age < data[j].age)
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

void mergeSort(DATA data[], int p, int r) {
    int q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(data, p , q);
        mergeSort(data, q + 1, r);
        merge(data, p, q, r);
    }
}

int main() {
	int N;
	int i;
	
	DATA obj[100001];

	scanf("%d", &N);
	i = 0;
	while (i < N){
		scanf("%d %s", &obj[i].age, obj[i].name);
		i++;
	}
	mergeSort(obj, 0, N);
	i = 0;
	while (i < N){
		printf("%d %s\n", obj[i].age, obj[i].name);
		i++;
	}
}