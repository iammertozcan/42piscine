int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	if (tab == NULL || tab[i] == NULL || f == NULL)
		return (0);
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
