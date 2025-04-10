/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 06:17:14 by psimao            #+#    #+#             */
/*   Updated: 2024/10/31 02:57:48 by psimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char str1[] = "hello";
	char str2[] = "hello";
	char str3[] = "hella";
	char str4[] = "hello, world!";
	printf("Comparando str1 e str2 (n = 5): %d\n", ft_strncmp(str1, str2, 5));
	printf("Comparando str1 e str3 (n = 4): %d\n", ft_strncmp(str1, str3, 4));
	printf("Comparando str1 e str4 (n = 7): %d\n", ft_strncmp(str1, str4, 7));
	return (0);
}*/
