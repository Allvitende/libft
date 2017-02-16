/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 23:33:22 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/07 05:46:56 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dlen;
	size_t			slen;

	i = 0;
	j = 0;
	dlen = 0;
	slen = 0;
	while (dst[i])
		i++;
	while (src[slen])
		slen++;
	dlen = i;
	while (src[j] && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (dlen > size)
		return (slen + size);
	else
		return (slen + dlen);
}
