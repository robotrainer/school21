#include <stdio.h>

int	findMin(int a, int b, int c)
{
	if (a < b && a < c)
	{
		return (a);
	}
	else if (b < a && b < c)
	{
		return (b);
	}
	else
		return (c);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;

	scanf("%d%d%d", &a, &b, &c);
	printf("%d\n", findMin(a, b, c));
	return (0);
}
