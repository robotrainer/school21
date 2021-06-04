#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print('S');
	ft_print('l');
	ft_print('o');
	ft_print('v');
	ft_print('o');
	ft_print('\n');
	return (0);
}
