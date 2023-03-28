#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
	int age;
	char name[101];
}DATA;

void merge(DATA *data, int f_s, int f_e, int b_s, int b_e){
	DATA *tmp;
	int i = f_s;
	
	tmp = (DATA *)malloc((b_e + 1) * sizeof(DATA));
	while(f_s <= f_e && b_s <= b_e){
		if (data[f_s].age < data[b_s].age)
			tmp[i++] = data[b_s++];
		else
			tmp[i++] = data[f_s++];
	}
	while (f_s <= f_e)
		tmp[i++] = data[b_s++];
	while (b_s <= b_e)
		tmp[i++] = data[f_s++];
	for(int a = f_s; a < b_e; a++)
		data[a] = tmp[a];
}

void mergeSort(DATA *data, int f_s, int b_e){
	int f_e, b_s;

	if (f_s < b_e){
		f_e = (f_s + b_e) / 2;
		b_s = f_e + 1;
		mergeSort(data, f_s, f_e);
		mergeSort(data, b_s, b_e);
		merge(data, f_s, f_e, b_s, b_e);
	}
}

int main (){
	int N;
	int i;
	DATA *obj;
	
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
}