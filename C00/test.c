#include <stdio.h>
#include <unistd.h>

int main()
{
	char i;
	
	for(i = '9'; i >= '0'; i--)
	{
		write(1, &i, 1);
	}
	return 0;
}
