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

char *ft_strstr(const char *big, const char *little)
{
	char *flag;

	flag = 0;
	if (*little == 0)
		return ((char *)big);
	while (*big++ != 0)
	{
		if (*big == *little)
		{
			*flag = *little;
			while (*big++ == *++little)
			{
				if (*little == 0)
					return (flag);
			}
		}
	}
	return (0);
}
