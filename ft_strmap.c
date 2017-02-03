/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 02:23:31 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/03 10:49:29 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*dst;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s) + 1;
	dst = (char *)malloc(sizeof(char) * size);
	if (!dst)
		return (NULL);
	while (*s)
		*dst++ = f(*s++);
	*dst = '\0';
	return (dst - (size - 1));
}
