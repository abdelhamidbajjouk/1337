#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	c;
	int	first;
	int	last;

	first = 0;
	last = size - 1;

	while(first < last)
	{
		c = tab[first];
		tab[first] = tab[last];
		tab[last] = c;
		first++;
		last--;
	}

}

/*
int	main()
{
	int	size = 5;
	int	x[] = {1,2,3,4,5};
	
	ft_rev_int_tab(x, size);	
	for(int i = 0; i < size; i++)
	{
		printf("%d", x[i]);
	}
	printf("\n");
	return (0);
}
*/
