/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:53:00 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/18 03:37:19 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
	int	main(void)

{

	int	numero = 10;
	int numero2 = 20;

	ft_ultimate_div_mod(&numero, &numero2);
		printf("la division de los punteros es: %d\n", numero);
		printf("el cociente de los punteros es: %d\n", numero2);
		return 0;
}*/
