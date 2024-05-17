/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:05:04 by lbrahins          #+#    #+#             */
/*   Updated: 2024/05/16 17:19:00 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstrerr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(2, &str[i++], 1);
	write(2, "\n", 1);
}

void	ft_read_file(char **av)
{
	int		file;
	int		bytesread;
	char	buffer[1];

	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
		ft_putstrerr("Cannot read file.");
		return ;
	}
	bytesread = read(file, buffer, 1);
	while (bytesread > 0)
	{
		write(1, &buffer, 1);
		bytesread = read(file, buffer, 1);
	}
	close(file);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		ft_putstrerr("File name missing.");
	else if (ac > 2)
		ft_putstrerr("Too many arguments.");
	else
		ft_read_file(av);
	return (0);
}
