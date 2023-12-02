/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyasa <eyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:53:08 by eyasa             #+#    #+#             */
/*   Updated: 2023/12/01 21:00:02 by eyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	int		file;
	char	c;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
	{
		file = open(argv[1], 0);
		if (file == -1)
			ft_putstr("Cannot read file.\n");
		else
		{
			while (read(file, &c, 1) > 0)
				ft_putchar(c);
		}
	}
	close(file);
	return (0);
}
