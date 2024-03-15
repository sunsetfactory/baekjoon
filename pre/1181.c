// #include <stdio.h>

// int ft_strcmp(char *s1, char *s2){
// 	while (*s1 == *s2){
// 		s1++;
// 		s2++;
// 	}
// 	return (*s1 - *s2);
// }

// int ft_strlen(char *s){
// 	char *t;
// 	t = s;
// 	while(*t)
// 		t++;
// 	return (t - s);
// }

// void merge(int data[], int p, int q, int r) {
//     int i = p, j = q + 1, k = p;
//     int tmp[1000000];
//     while(i <= q && j <= r) {
//         if(ft_strlen(data[i]) < ft_strlen(data[j]))
// 			tmp[k++] = data[i++];
//         else if (ft_strlen(data[i]) > ft_strlen(data[j]))
// 			tmp[k++] = data[j++];
// 		else if (ft_strlen(data[i]) == ft_strlen(data[j])){
// 			if(ft_strcmp(data[i], data[j]))
// 				tmp[k++] = data[i++];
// 			else
// 				tmp[k++] = data[j++];
// 		}
//     }
//     while(i <= q)
// 		tmp[k++] = data[i++];
//     while(j <= r)
// 		tmp[k++] = data[j++];
//     for(int a = p; a <= r; a++)
// 		data[a] = tmp[a];
// }

// void mergeSort(int data[], int p, int r) {
//     int q;
//     if(p < r) {
//         q = (p + r) / 2;
//         mergeSort(data, p , q);
//         mergeSort(data, q + 1, r);
//         merge(data, p, q, r);
//     }
// }

// int main (){
// 	int N;
// 	int i;
// 	char *words[20000];
// 	int	word_len[20000] = {0, };

// 	scanf("%d", &N);
// 	i = 0;
// 	while (i < N){
// 		scanf("%s", words[i]);
// 		i++;
// 	}
// 	mergeSort(words, 0, N - 1);
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *str1, const void *str2){
    if (strlen(*(char**)str1)>strlen(*(char**)str2)){
        return 1;
    }else if (strlen(*(char**)str1)<strlen(*(char**)str2)){
        return -1;
    }else {
        return (strcmp(*(char**)str1, *(char**)str2));
    }
}

int main(){
    int n;
    scanf("%d",&n);

    char *a[n+1];
    char arr[51];
    char *b;

    for (int i=0; i<n; i++){
        scanf("%s",arr);
        b = (char*)malloc(sizeof(char) * strlen(arr) + 1);
        strcpy(b,arr);
        a[i] = b;
    }

    qsort(a , n , sizeof(char *), compare);

    for (int i=0; i<n; i++){
        if (strcmp(a[i],a[i+1])!=0){
            printf("%s\n",a[i]);
        }
    }
    return 0;
}