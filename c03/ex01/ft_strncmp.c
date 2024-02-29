/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:23:47 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/26 18:42:16 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str1 = "Hola";
	char	*str2 = "Hla";

	unsigned int	n = 4;
	int result = ft_strncmp(str1, str2, n);

	if (result == 0)
	{
		write(1, "las cadenas son iguales\n", 22);
	}
	else
	{
	write (1, "las cadenas son diferentes.\n", 25);
	}
	return (0);
}*/
