/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:57:04 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/16 12:20:25 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int div;
	int mod;
	int numero = 10;
	int numero2 = 3;
	ft_div_mod(numero, numero2, &div, &mod);
	printf("la division es: %d\n", div);
	printf("el cociente es: %d\n", mod);
return 0;
}*/	
