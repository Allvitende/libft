/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 20:24:41 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/06 20:24:43 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2++)
	{
		if (n == 0)
			return (0);
		else if (*s1++ == 0)
			return (0);
		n--;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
}
