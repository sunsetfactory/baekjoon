#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
	int age;
	char name[101];
}DATA;

DATA *obj;

void merge(DATA *data, int l, int m, int r){
	DATA *tmp;
	int t_i = l, l_i = l, r_i = m + 1;
	
	tmp = (DATA *)malloc((r - l) * sizeof(DATA));
	while(l_i <= m && r_i <= r){
		if (data[l_i].age > data[r_i].age)
			tmp[t_i++] = data[r_i++];
		else
			tmp[t_i++] = data[l_i++];
	}
	while (l_i <= m)
		tmp[t_i++] = data[l_i++];
	while (r_i <= r)
		tmp[t_i++] = data[r_i++];
	for(int a = l; a <= r; a++)
		data[a] = tmp[a];
	return ;
}

void mergeSort(DATA *data, int l, int r){
	int m;

	if (l == r)
		return ;
	m = (l + r) / 2;
	mergeSort(data, l, m);
	mergeSort(data, m + 1, r);
	merge(data, l, m, r);
}

int main (){
	int N;
	int i;
	
	scanf("%d", &N);
	obj = (DATA *)malloc(N * sizeof(DATA));
	i = 0;
	while (i < N){
		scanf("%d %s", &(obj + i)->age, (obj + i)->name);
		i++;
	}
	mergeSort(obj, 0, N - 1);
	i = 0;
	while (i < N){
		printf("%d %s\n", obj[i].age, obj[i].name);
		i++;
	}
	return (0);
}