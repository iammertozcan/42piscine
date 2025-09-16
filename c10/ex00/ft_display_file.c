#include "ft_display_file.h"
#include <unistd.h>
#include <fcntl.h>

int	ft_read_file(int fd)
{
	char	buff[1025];
	int		control;

	control = read(fd, buff, 1024);
	while (control > 0)
	{
		buff[control] = '\0';
		ft_putstr(buff);
		control = read(fd, buff, 1024);
	}
	if (control == -1)
		return (-1);
	return (0);
}

int	ft_display_file(char *filename)
{
	int	fd;
	int	result;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	result = ft_read_file(fd);
	close(fd);
	return (result);
}
