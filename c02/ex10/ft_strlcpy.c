/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:06:19 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/22 13:48:35 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	src_length;

	a = 0;
	src_length = ft_strlen(src);
	if (size > 0)
	{
		while (src[a] != '\0' && a < (size - 1))
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (src_length);
}
/*
int	main(void)
{
	char	src[] = "sat, coEnt tu vas ? i42mots qnte-deux; cinte+et+un";
	char	dest[10];

	ft_strlcpy(dest, src, sizeof (dest));
	write (1, dest, ft_strlcpy(dest, src, sizeof (dest)));
	return (0);
}*/
