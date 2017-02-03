/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 21:58:07 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/03 10:46:11 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	wordsize(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	len;
	int		i;
	char	**ret;
	int		words;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_wordcount(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (words--)
	{
		while (*s != '\0' && *s == c)
			s++;
		len = wordsize(s, c);
		ret[i] = ft_strsub(s, 0, len);
		if (ret[i] == '\0')
			return (NULL);
		s = s + wordsize(s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
