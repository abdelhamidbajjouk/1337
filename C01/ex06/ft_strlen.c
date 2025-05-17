int	ft_strlen(char	*str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/*
int	main()
{
	char *c = "younes";
	int length = ft_strlen(c);
	printf("%d\n", length);
	return (0);
}
*/
