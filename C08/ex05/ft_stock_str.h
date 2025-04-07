/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 06:21:13 by psimao            #+#    #+#             */
/*   Updated: 2024/11/07 06:21:15 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
# include <unistd.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;
#endif
