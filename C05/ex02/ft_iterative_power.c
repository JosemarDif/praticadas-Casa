/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:04:06 by psimao            #+#    #+#             */
/*   Updated: 2024/11/04 17:04:13 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 1)
		return (!power);
	result = nb;
	while (--power)
		result *= nb;
	return (result);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_iterative_power(-5, 0));
	//printf("T: %d\n", !0);
	return (0);
}*/
