/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:41:05 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/23 12:27:16 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	string[] = "Hola mundo";

	if (ft_str_is_uppercase(string))
	{
		write(1, "solo tiene caracteres alfabeticos.\n", 46);
	}
	else
	{
		write(1, "no contiene unicamente  caracteres alfabeticos.\n", 56);
	}
	return (0);
}*/
