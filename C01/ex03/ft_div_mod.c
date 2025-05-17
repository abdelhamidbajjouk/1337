#include <stdio.h>

void	ft_div_mod(int	a,int	b,int	*div,int	*mod)
{
	if(b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}


int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 11;
	b = 2;
	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("division value = %d\n", div);
	printf("modulo value = %d\n", mod);
	return (0);
}

