/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:20:58 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/23 12:16:51 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*pnt;

	pnt = dest;
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (pnt);
}
/*
int	main(void)
{
	char	string[] = "Hola Mundo";
	char	string2[20] = "" ;

	ft_strncpy(string2, string, 8); 
	write(1, &string2, 20);
	return (0);
}*/
