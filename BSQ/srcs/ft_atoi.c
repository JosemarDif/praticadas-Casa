/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:22:18 by psimao            #+#    #+#             */
/*   Updated: 2024/11/06 20:22:34 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	while (ft_is_printable(str[i]))
		i++;
	i--;
	j = 0;
	while (str[i] && j < 2)
	{
		i--;
		j++;
	}
	j = 0;
	nb = 0;
	while (ft_is_number(str[j]) && j < i)
	{
		nb = nb * 10 + str[j] - '0';
		j++;
	}
	return (nb);
}
