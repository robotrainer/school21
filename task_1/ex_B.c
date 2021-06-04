#include <stdio.h>
/*result = (number_1 > number_2) ? 1 : (number_1 < number_2) ? 2 : 0*/
int	main(void)
{
	int	number_1;
	int	number_2;
	int	result;

	scanf("%d%d", &number_1, &number_2);
	if (number_1 > number_2)
	{
		result = 1;
	}
	else if (number_1 < number_2)
	{
		result = 2;
	}
	else
	{
		result = 0;
	}
	printf("%d\n", result);
	return (0);
}
