/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 23:33:22 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/17 23:33:23 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dlen;
	size_t slen;

	dlen = 0;
	slen = ft_strlen(src);
	while (*dst && size > 0)
	{
		dst++;
		dlen++;
		size--;
	}
	while (*src && size-- > 1)
		*dst++ = *src++;
	if (size == 1 || *src == 0)
		*dst = '\0';
	return (dlen + slen);
}
