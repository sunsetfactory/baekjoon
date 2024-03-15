#include <stdio.h>

int	ft_numcmp(int n1, int n2)
{
	if (n1 > n2)
		return (1);
	else if (n1 < n2)
		return (-1);
	return (0);
}

int main (){
	int N;
	int	kg[50], cm[50];
	int i, j;
	int rank;

	scanf("%d", &N);
	i = 0;
	while(i < N){
		scanf("%d", &kg[i]);
		scanf("%d", &cm[i]);
		i++;
	}

	i = 0;
	while (i < N){
		j = 0;
		rank = 1;
		while (j < N){
			if ((kg[i] < kg[j]) && (cm[i] < cm[j]))
				rank++;
			j++;
		}
		printf("%d ", rank);
		i++;
	}
}