#include "ft_display_file.h"
#include <unistd.h>

int	main(int ac, char **av)
{
	int	fd;

	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		fd = ft_display_file(av[1]);
		if (fd == -1)
		{
			ft_putstr("Cannot read file.\n");
			return (1);
		}
	}
	return (0);
}
