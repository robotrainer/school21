#include <stdio.h>

int	main(void)
{
	int	number;
	int	result;

	result = 1;
	scanf("%d", &number);
	if (0 < number && number < 10000)
	{
		while (result < number)
		{
			result *= 2;
		}
		if (result == number)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return (0);
}
