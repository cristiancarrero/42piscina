/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:42:40 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/23 12:39:29 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		cap;
	char	*ptr;

	ptr = str;
	cap = 1;
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || \
				(*str >= '0' && *str <= '9'))
		{
			if (cap && (*str >= 'a' && *str <= 'z'))
				*str -= 32;
			else if (!cap && (*str >= 'A' && *str <= 'Z'))
				*str += 32;
			cap = 0;
		}
		else
		{
			cap = 1;
		}
		str++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	str1[] = "sat, coEnt tu vas ? 42mots qnte-deux; cinte+et+un";

	ft_strcapitalize(str1);
	write (1, str1, sizeof (str1) -1);
	return (0);
}*/
