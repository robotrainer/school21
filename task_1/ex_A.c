/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_A.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robotrainer <robotrainer@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:48:36 by robotrai          #+#    #+#             */
/*   Updated: 2021/06/10 14:57:22 by robotrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	number_1;
	int	number_2;
	int	sum;
	int	a;

	scanf("%d%d", &number_1, &number_2);
	sum = number_1 + number_2;
	printf("%d\n", sum);
	return (0);
}
