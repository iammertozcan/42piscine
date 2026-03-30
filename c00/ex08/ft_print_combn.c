#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putcomb(int *arr, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = '0' + arr[i];
		write(1, &c, 1);
		i++;
	}
}

static int	ft_next_comb(int n, int *arr)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (arr[i] < 9 - (n - 1 - i))
			break ;
		i--;
	}
	if (i < 0)
		return (0);
	arr[i]++;
	while (++i < n)
		arr[i] = arr[i - 1] + 1;
	return (1);
}

void	ft_print_combinations(int n, int *arr)
{
	while (1)
	{
		ft_putcomb(arr, n);
		if (!ft_next_comb(n, arr))
			break ;
		ft_putstr(", ");
	}
}

void	ft_print_combn(int n)
{
	int	digits[9];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		digits[i] = i;
		i++;
	}
	ft_print_combinations(n, digits);
}
