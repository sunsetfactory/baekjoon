#include <stdio.h>

int main (){
	char str[101];
	int i, cnt = 0;

	scanf("%s", str);
	i = 0;
	while(str[i]){
		if ((str[i] == 'c') && \
		(str[i + 1] == '=' || str[i + 1] == '-'))
		{
			i++;
		}
		else if ((str[i] == 'd') && \
		(str[i + 1] == 'z' && \
		 str[i + 2] == '='))
		{
			i += 2;
		}
		else if ((str[i] == 'd') && \
		(str[i + 1] == '-'))
		{
			i++;
		}
		else if ((str[i] == 'l' || str[i] == 'n') && \
		(str[i + 1] == 'j'))
		{
			i++;
		}
		else if ((str[i] == 's' || str[i] == 'z') && \
		(str[i + 1] == '='))
		{
			i++;
		}
		cnt++;
		i++;
	}
	printf("%d", cnt);
}