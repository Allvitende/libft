/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 00:29:56 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/05 13:10:56 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int					i;
	int					flag;
	unsigned long long	ret;

	while (*str == ' ' || *str == '\f' || *str == '\t' || *str == '\n'
			|| *str == '\r' || *str == '\v')
		str++;
	flag = (*str == '-' ? -1 : 1);
	str = (*str == '-' || *str == '+') ? str + 1 : str;
	while (*str == '0')
		str++;
	i = 0;
	ret = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (i > 19 || ret >= 9223372036854775808ULL)
		return (flag == 1 ? -1 : 0);
	return (ret * flag);
}
