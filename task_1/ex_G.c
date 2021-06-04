#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	result;
	int	D;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	result = 0;
	if (a != 0)
	{
		D = b * b - 4 * a * c;
		if (D > 0)
		{
			if (2 * a > 0)
			{
				if (-b + sqrt(D) > 0)
					result += 1;
				if (-b - sqrt(D) > 0)
					result += 1;
			}
			else
			{
				if (-b + sqrt(D) < 0 )
					result += 1;
				if (-b - sqrt(D) < 0 )
					result += 1;
			}	
		}
		else if (D == 0)
		{
			if (-b / (2 * a) > 0)
				result += 1;
		}
		else
			result = 0;
	}
	else
		result = -1;
	printf("%d\n", result);
	return (0);
}
