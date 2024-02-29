/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:37:17 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/23 12:25:18 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	string[] = "HolaMundo";

	if (ft_str_is_lowercase(string))
	{
		write(1, "la cadena solo tiene caracteres alfabeticos.\n", 46);
	}
	else
	{
		write(1, "lacadenoconteunicamentecaraclfabeticos.\n", 56);
	}
	return (0);
}*/
