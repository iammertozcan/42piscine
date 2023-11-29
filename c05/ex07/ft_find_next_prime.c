int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb <= 2)
		return (0);
	while (c <= nb / 2)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

int	ft_is_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
