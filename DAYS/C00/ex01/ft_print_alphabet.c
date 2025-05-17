#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_alphabet(void)
{
	int    j;

        j = 97;
        while(j <= 122)
        {
                ft_putchar(j);
                j++;
        }

        ft_putchar('\n');
}

/*
int	main()
{
	ft_print_alphabet();
	return 0;
}
*/
