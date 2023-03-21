#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int tc ;
	char tmp;
	int count;
	int i, j;
	scanf("%d", &tc);
	
	count = tc; 
	i = 0;
	while (i < tc)
	{
		int arr[26] = {0, };
		tmp = '0';
		scanf("%s", str);
		j = 0;
		while (str[j] != '\0')
		{
			if (tmp != str[j]) 
			{
				tmp = str[j];
				arr[str[j] - 'a'] += 1;
			} 
			if (arr[str[j] - 'a'] > 1)
			{
				count -= 1;
				break;
			}
			j++;
		}
		i++;
	}
	printf("%d", count);
	return 0;
}