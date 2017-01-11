/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 21:53:53 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/08 21:53:54 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t len;

	len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			if (!ft_strncmp(big, little, len))
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
