/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:43:43 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/21 19:08:22 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	string[] = "HolaMundo";
	char	string2[] = "ABCDefgh123";

	if (ft_str_is_printable(string))
	{
		write(1, "1.\n", 5);
	}
	else
	{
		write(1, "no contiene unicamente  caracteres alfabeticos.\n", 56);
	}
	return (0);
}*/
