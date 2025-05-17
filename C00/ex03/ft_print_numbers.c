#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_numbers(void)
{
	int	j;

	j = 48;

	while(j <= 57)
	{
		ft_putchar(j);
		j++;
	}

	ft_putchar('\n');
}

int	main()
{
	ft_print_numbers();
	return 0;
}
