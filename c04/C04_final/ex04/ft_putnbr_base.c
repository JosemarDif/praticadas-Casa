/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:36:18 by psimao            #+#    #+#             */
/*   Updated: 2024/11/02 18:36:24 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int base_len)
{
	if (nbr <= -base_len || nbr >= base_len)
		ft_putnbr_base_recursive(nbr / base_len, base, base_len);
	if (nbr < 0)
		ft_putchar(base[-(nbr % base_len)]);
	else
		ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;	

	if (!is_valid_base(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
		ft_putchar('-');
	ft_putnbr_base_recursive(nbr, base, base_len);
}
