/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 11:52:06 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/03 12:29:46 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			nbrlen;
	int			is_neg;
	long		ncopy;
	char		*ret;

	is_neg = (n < 0) ? 1 : 0;
	nbrlen = ft_nbrlen(n);
	if (!(ret = (char *)malloc(sizeof(char) * (nbrlen + 1))))
		return (NULL);
	ncopy = n;
	ncopy = (is_neg) ? -ncopy : ncopy;
	ret[nbrlen] = '\0';
	nbrlen--;
	while (nbrlen)
	{
		ret[nbrlen] = ncopy % 10 + '0';
		ncopy /= 10;
		nbrlen--;
	}
	ret[nbrlen] = (is_neg) ? '-' : (ncopy % 10 + '0');
	return (ret);
}
