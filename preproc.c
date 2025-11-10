/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preproc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emil_1189 <se_aliev@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:12:09 by emil_118          #+#    #+#             */
/*   Updated: 2021/07/07 14:13:13 by emil_118         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define Anton
#define width 60
#ifdef Anton
	#define myMult(a, b) (a)*(b)
#endif
#undef myMult

int main()
{
	#if width > 50
	printf("%d\n", myMult(5+5,7));
	#elif width > 20
		printf("AAAAAAAAAAAA!!!");
	#else
		printf("Где мульт!!\n");
	#endif //Anton
	return 0;
}
