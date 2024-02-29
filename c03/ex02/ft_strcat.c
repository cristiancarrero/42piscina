/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:43:26 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/26 19:27:59 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*pntr;

	pntr = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (pntr);
}
/*
int	main(void)
{
	char	dest[20] = "Hola, ";
	char	src[] = "mundo!";

	ft_strcat(dest, src);
	write(1, dest, 12);
	return (0);
}*/
