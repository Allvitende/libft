/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <bschroed@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:28:03 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/05 17:28:04 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		write(1, &s[n], 1);
		n++;
	}
}
