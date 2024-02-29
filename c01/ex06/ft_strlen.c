/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:47:23 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/18 10:07:18 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	numero;

	numero = 0;
	while (str[0] != '\0')
	{
		str++;
		numero++;
	}
	return (numero);
}
/*
int main()
{
	char cadena[] = "hello world";
	int numero = ft_strlen(cadena);
	printf("longitud de cadena: %d\n", numero);
	return 0;
}*/
