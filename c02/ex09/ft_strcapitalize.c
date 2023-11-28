char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && (str[i] <= 'a' && str[i] >= 'z'))
		{
			str[i] = str[i] - 32;
			j++;
		}
		else if (j > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'z' && str[i] < 'a' || str[i] > 'z'))
			j = 0;
		else
			i++;
		j++;
	}
	return (str);
}
