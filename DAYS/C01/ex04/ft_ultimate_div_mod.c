#include <stdio.h>

void	ft_ultimate_div_mod(int	*a,int	*b)
{
	int c;
	if(*b != 0)
	{
		c = *a / *b;
		*b = *a % *b;
		*a = c;
	}
}

/*
int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}
*/
