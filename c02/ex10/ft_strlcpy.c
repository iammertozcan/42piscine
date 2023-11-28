unsigned int	ft_stlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (str[j] != '\0' && j < (size -1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
