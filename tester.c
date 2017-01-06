/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
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
	n = strlen("Brodie Schroeder");

	ft_putchar('b');
	ft_putchar('\n');
	ft_putstr("Brodie Schroeder");
	ft_putchar('\n');
	printf("%d\n", n);
	return 0;
}
