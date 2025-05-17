#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int	*a,int	*b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main()
{
	int a;
	int b;

	a = 69;
	b = 1337;

	ft_swap(&a, &b);
	printf("value of a = %d\n", a);
	printf("value of b = %d\n", b);

	return (0);
}
*/
