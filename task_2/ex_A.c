#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	int	number;
	int	x;
	int	i;
	bool	all;

	i = 0;
	all = true;
	scanf("%d", &number);
	int	numbers[number];
	while (i <= number - 1)
	{
		scanf("%d", &numbers[i]);
		++i;
	}
	printf("Enter x\n");
	scanf("%d", &x);
	for (int i = 0; i < number; ++i)
	{
		all = all && (numbers[i] % x != 0);
		if (numbers[i] % x == 0)
			printf("%d ", i);
	}
	if (all)
		printf("%d\n", -1);
	return (0);
}
