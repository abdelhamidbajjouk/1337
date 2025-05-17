#include <stdio.h>

void	ft_sort_int_tab(int	*tab, int	size)
{
	int 	i;
	int	tmp;

	while(size >= 0)
	{
		i = 0;
		while(i < size - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}	
		size--;
	}
}

/*
int	main()
{
	int 	arr[5] = {1,3,2,6,5};
	int	i;
	ft_sort_int_tab(arr, 5);
	while (i < 5)
    	{
        	printf("%d", arr[i]);
        	i++;
	}

	return (0);
}
*/
