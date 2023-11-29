int	ft_sqrt(int nb)
{
	long	sr;

	sr = 1;
	if (nb > 0)
	{
		while (sr * sr <= nb)
		{
			if (sr * sr == nb)
				return (sr);
			sr++;
		}
	}
	return (0);
}
