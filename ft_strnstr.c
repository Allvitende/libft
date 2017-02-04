/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 22:23:11 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/03 15:27:07 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len_a)
{
	size_t len_b;

	len_b = ft_strlen(l);
	if (!*l)
		return ((char *)b);
	while (*b && len_a)
	{
		if (len_a < len_b)
			break ;
		if (*b == *l)
		{
			if (!ft_strncmp(b, l, len_b))
				return ((char *)b);
		}
		b++;
		len_a--;
	}
	return (NULL);
}
