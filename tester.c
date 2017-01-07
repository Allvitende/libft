/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                             :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 21:05:44 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/05 21:05:53 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>

int main() {
	int n;
	int m;
	int o;

	n = ft_strlen("Brodie Schroeder");
	m = ft_strcmp("Brodie", "Schroeder");
	o = ft_strncmp("Brodis", "Brodie", 6);

	printf("%s\n", "***Testing ft_putchar***");
	ft_putchar('b');
	printf("\n%s\n","***Testing ft_putnbr***");
	ft_putnbr(42);
	printf("\n%s\n","***Testing ft_putstr***");
	ft_putstr("Brodie Schroeder");
	printf("\n%s\n","***Testing ft_putendl***");
	ft_putstr("Brodie Schroederly");
	printf("\n%s\n","***Testing ft_strlen***");
	printf("%d", n);
	printf("\n%s\n","***Testing ft_strcmp***");
	printf("%d", m);
	printf("\n%s\n","***Testing ft_strncmp***");
	printf("%d\n", o);

	return 0;
}
