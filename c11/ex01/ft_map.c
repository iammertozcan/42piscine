#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*arr;
	int	i;

	if (tab == NULL || length == 0 || f == NULL)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * length);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
