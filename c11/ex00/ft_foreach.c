#include <stddef.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	if (tab == NULL || length == 0 || f == NULL)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
