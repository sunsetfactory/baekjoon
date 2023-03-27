#include <stdio.h>

void merge(int xy[2][100000], int x1, int x2, int x3){
	int i = x1, j = x2 + 1, k = x1;
	int tmp[2][100000];
	while (i <= x2 && j <= x3){
		if(xy[0][i] < xy[0][j]){
			tmp[0][k] = xy[0][i];
			tmp[1][k++] = xy[1][i++];
		}
		else if(xy[0][i] == xy[0][j]){
			if(xy[1][i] < xy[1][j]){
				tmp[0][k] = xy[0][i];
				tmp[1][k++] = xy[1][i++];
			}
			else{
				tmp[0][k] = xy[0][j];
				tmp[1][k++] = xy[1][j++];
			}
		}
		else{
			tmp[0][k] = xy[0][j];
			tmp[1][k++] = xy[1][j++];
		}
	}
	while (i <= x2){
		tmp[0][k] = xy[0][i];
		tmp[1][k++] = xy[1][i++];
	}
	while (j <= x3){
		tmp[0][k] = xy[0][j];
		tmp[1][k++] = xy[1][j++];
	}
    for(int a = x1; a<=x3; a++){
		xy[0][a] = tmp[0][a];
		xy[1][a] = tmp[1][a];
	}
}

void mergeSort(int xy[2][100000], int x1, int x3){
	int x2;
	if (x1 < x3){
		x2 = (x1 + x3) / 2;
		mergeSort(xy, x1, x2);
		mergeSort(xy, x2 + 1, x3);
		merge(xy, x1, x2, x3);
	}
}

int	main ()
{
	int	N;
	int	xy[2][100000] = {0, };
	int	i = 0, j;

	scanf("%d", &N);
	while (i < N)
	{
		scanf("%d", &xy[0][i]);
		scanf("%d", &xy[1][i]);
		i++;
	}
	mergeSort(xy, 0, N - 1);
	i = 0;
	while (i < N)
	{
		printf("%d %d\n", xy[0][i], xy[1][i]);
		i++;
	}
}
