#include <stdio.h>
#include <stdlib.h>

typedef struct pos
{
	int x;
	int y;
}POS;

void merge(POS *pos, int l, int m, int r){
	int i = l, j = m + 1, k = l;
	POS *tmp;

	tmp = (POS *)malloc(sizeof(POS) * (r - l + 1));
	while (i <= m && j <= r){
		if ((pos + i)->y == (pos + j)->y)
			if ((pos + i)->x <= (pos + j)->x)
				*(tmp + k++) = *(pos + i++);
			else
				*(tmp + k++) = *(pos + j++);
		else
			if ((pos + i)->y < (pos + j)->y)
				*(tmp + k++) = *(pos + i++);
			else
				*(tmp + k++) = *(pos + j++);
	}
	while (i <= m)
		*(tmp + k++) = *(pos + i++);
	while (j <= r)
		*(tmp + k++) = *(pos + j++);
	for(int a = l; a <= r; ++a)
		 *(pos + a) = *(tmp + a);
}

void mergeSort(POS *pos, int l, int r){
	int m = (l + r) / 2;

	if (l == r)
		return ;
	mergeSort(pos, l, m);
	mergeSort(pos, m + 1, r);
	merge(pos, l, m, r);
}

int main (){
	int N;
	int i;
	POS *pos;

	scanf("%d", &N);
	pos = (POS *)malloc(sizeof(POS) * N + 1);
	i = 0;
	while (i < N){
		scanf("%d", &(pos + i)->x);
		scanf("%d", &(pos + i)->y);
		i++;
	}
	mergeSort(pos, 0, N - 1);
	i = 0;
	while (i < N){
		printf("%d %d\n", (pos + i)->x, (pos + i)->y);
		i++;
	}
	return (0);
}