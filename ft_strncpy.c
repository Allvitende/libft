/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 20:01:04 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/08 20:01:06 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *ret;

	ret = dst;
	while (len > 0 && *src != '\0')
	{
		*dst++ = *src++;
		--len;
	}
	while (len > 0)
	{
		*dst++ = '\0';
		--len;
	}
	return (ret);
}
