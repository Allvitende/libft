/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 00:29:56 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/12 00:29:57 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str) || *str == '+')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	while (ft_isdigit(*str))
	{
		num *= 10;
		num = num + (*str - '0');
		str++;
	}
	return (num * sign);
}
