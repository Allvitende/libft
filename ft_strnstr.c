/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 22:23:11 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/10 22:23:12 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len_a)
{
	size_t len_b;

	len_b = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len_a)
	{
		if (len_a < len_b)
			break ;
		if (*big == *little)
		{
			if (!ft_strncmp(big, little, len_b))
				return ((char *)big);
		}
		big++;
		len_a--;
	}
	return (NULL);
}
