#include <stdio.h>

int	main(void)
{
	int	number;
	int	i;
	int	square;

	square = 0;
	i = 1;
	scanf("%d", &number);
	if (0 < number && number < 10000)
	{
		while (square < number)
		{
			square = i * i;
			if (square <= number)
				printf("%d\n", square);
			++i;
		}
	}
	return (0);
}
