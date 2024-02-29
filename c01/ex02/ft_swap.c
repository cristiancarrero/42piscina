/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:01:48 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/16 12:22:21 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int main()
{
	int x = 100;
	int y = 120;
	printf("antes del relevo: x = %d, y = %d", x, y);
	ft_swap(&x, &y);
	printf("despues del relevo: y = %d, x = %d", x, y);
	return 0;
}*/
