/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:24:54 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/23 12:20:01 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	string[] = "HolaMun666666do";	

	if (ft_str_is_numeric(string))
	{
		write(1, "la cadena solo tiene caracteres alfabeticos.\n", 46);
	}
	else
	{
		write(1, "lacadenanocontieneunicamentecaractsalfabeticos.\n", 56);
	}
	return (0);
}*/
