/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 00:29:56 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/13 20:56:57 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int					i;
	int					flag;
	unsigned long long	ret;

	while (ft_isspace(*str))
		str++;
	flag = (*str == '-' ? -1 : 1);
	str = (*str == '-' || *str == '+') ? str + 1 : str;
	while (*str == '0')
		str++;
	i = 0;
	ret = 0;
	while (str[i] && (ft_isdigit(str[i])))
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (i > 19 || ret >= 9223372036854775808ULL)
		return (flag == 1 ? -1 : 0);
	return (ret * flag);
}
