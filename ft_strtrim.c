/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 23:02:58 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/31 01:14:21 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t j;
	size_t k;
	char *ret;

	i = 0;
	k = 0;
	if (s[k] == '\0')
		return ("\0");
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		if (s[i] == '\0')
			return ("\0");
	}
	j  = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
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
