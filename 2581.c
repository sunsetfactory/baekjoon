#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}


int main (){
	int N, M;
	int sum = 0, min, flag = 1;

	scanf("%d %d", &M, &N);
	while (M <= N){
		if (ft_is_prime(M)){
			if (flag){
				flag = 0;
				min = M;
			}
			sum += M;
		}
		M++;
	}
	if (sum == 0){
		printf("-1");
		return (0);
	}
	printf("%d\n%d", sum, min);
}
