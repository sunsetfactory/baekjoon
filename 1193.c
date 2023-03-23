#include <stdio.h>

int facto(int nb){
	int	res;

	res = 0;
	if (nb < 2)
		return (1);
	res = facto(nb - 1) + nb;
	return (res);
}

int main (){
	int x, y = 1;
	int i;
	int n;
	scanf("%d", &n);

	while (facto(y) < n){
		y++;
	}
	i = facto(y) - y + 1;
	x = 1;
	while (i < n){
		i++;
		x++;
	}
	if (y % 2)
		printf("%d/%d", (y - x + 1), x);
	else
		printf("%d/%d", x, (y - x + 1));
	return (0);
}