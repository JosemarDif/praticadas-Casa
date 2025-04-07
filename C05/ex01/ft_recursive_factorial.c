/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:01:18 by psimao            #+#    #+#             */
/*   Updated: 2024/11/04 17:03:13 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (!nb);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_recursive_factorial(0));
	return (0);
}*/
