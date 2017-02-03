/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 02:52:00 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/03 10:53:10 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dst;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!dst)
		return (NULL);
	while (*s1 != '\0')
		*dst++ = *s1++;
	while (*s2 != '\0')
		*dst++ = *s2++;
	*dst = '\0';
	return (dst - (len_s1 + len_s2));
}
