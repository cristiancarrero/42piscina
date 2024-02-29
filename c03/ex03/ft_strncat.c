/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:28:55 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/26 19:54:25 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*pntr;

	pntr = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (pntr);
}
/*
int	main(void)
{
	char	dest[20] = "Hola, ";
	char	src[] = "mundo!";

	unsigned int	nb = 3;

	ft_strncat(dest, src, nb);
	write(1, dest, 12);
	return (0);
}*/
