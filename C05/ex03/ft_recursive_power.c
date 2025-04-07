/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:06:04 by psimao            #+#    #+#             */
/*   Updated: 2024/11/04 17:06:08 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (!power);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_recursive_power(-5, 2));
	return (0);
}*/
