#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	else
	{
		array = (int *)malloc((max - min) * sizeof(int));
		if (array == NULL)
			return (NULL);
		i = 0;
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	return (array);
}
