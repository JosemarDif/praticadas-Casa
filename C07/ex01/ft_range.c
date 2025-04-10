/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:04:33 by psimao            #+#    #+#             */
/*   Updated: 2024/11/05 13:04:40 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = NULL;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	min;
	int	max;
	int	i;

	min = 5;
	max = 50;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
