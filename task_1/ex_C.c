#include <stdio.h>

int	main(void)
{
	long int	year;

	scanf("%ld", &year);
	if (1 < year && year < 100000)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return (0);


