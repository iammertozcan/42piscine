#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		i;
	int		j;
	int		k;

	concat = (char *)malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			concat[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			concat[k++] = sep[j++];
		}
		i++;
	}
	concat[k] = '\0';
	return (concat);
}
