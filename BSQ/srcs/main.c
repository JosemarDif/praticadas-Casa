/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:16:36 by psimao            #+#    #+#             */
/*   Updated: 2024/11/06 20:16:45 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
}

void	ft_error_map(void)
{
	write (2, "map error\n", 10);
}

void	ft_exit(void)
{
	ft_error_map();
	exit(1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc--;
	argv++;
	while (i < argc)
	{
		ft_init(argc, argv[i]);
		if (i < argc - 1)
			ft_putchar('\n');
		i++;
	}
	if (!argc)
	{
		ft_init(argc, argv[i]);
	}
	return (0);
}
