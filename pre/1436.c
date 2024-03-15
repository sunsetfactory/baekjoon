#include <stdio.h>

int ft_csnum(int n){
	int count;
	int che_n;

	count = 0;
	while (n && count != 3){
		che_n = n % 10;
		n /= 10;
		if (che_n != 6)
			count = 0;
		else
			count++;
	}
	return count;
}

int main (){
	int N;
	int des = 665;

	scanf("%d", &N);
	while (N > 0){
		des++;
		if (ft_csnum(des) == 3)
			N--;
	}
	printf("%d", des);
}
