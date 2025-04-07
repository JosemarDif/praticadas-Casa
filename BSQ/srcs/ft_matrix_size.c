/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:19:46 by psimao            #+#    #+#             */
/*   Updated: 2024/11/06 20:19:52 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	x_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[size])
		size++;
	return (size);
}

int	y_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[0][size])
		size++;
	return (size);
}
