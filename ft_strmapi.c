/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 02:33:25 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/29 03:50:19 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;
	size_t			size;

	size = ft_strlen(s) + 1;
	i = 0;
	dst = (char *)malloc(sizeof(char) * size);
	if (!dst)
		return (NULL);
	while (s[i])
	{
		*dst++ = f(i, s[i]);
		i++;
	}
	*dst = '\0';
	return (dst - (size - 1));
}
