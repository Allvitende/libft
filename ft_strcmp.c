/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 17:08:57 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/06 17:08:59 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2++)
	{
		if (*s1++ == 0)
			return 0;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
}
