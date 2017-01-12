/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 19:08:35 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/11 19:08:38 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long n_copy;

	n_copy = n;
	if (n_copy < 0)
	{
		ft_putchar_fd('-', fd);
		n_copy = -n_copy;
	}
	if (n_copy > 9)
	{
		ft_putnbr_fd(n_copy / 10, fd);
		ft_putnbr_fd(n_copy % 10, fd);
	}
	else
		ft_putchar_fd(n_copy + '0', fd);
}
