/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 23:02:58 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/06 16:47:36 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	trimfront(char const *s)
{
	size_t i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static	size_t	trimback(char const *s)
{
	size_t j;

	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	return (j);
}

static	char	*retnull(void)
{
	char *ret;

	if (!(ret = (char *)malloc(sizeof(char))))
		return (NULL);
	*ret = '\0';
	return (ret);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ret;

	if (!s)
		return (NULL);
	i = trimfront(s);
	j = trimback(s);
	k = 0;
	if (s[i] == '\0')
		return (retnull());
	ret = (char *)malloc(sizeof(char) * ((j - i) + 2));
	if (!ret)
		return (NULL);
	while (j >= i)
	{
		ret[k] = s[i];
		k++;
		i++;
	}
	ret[k] = '\0';
	return (ret);
}
