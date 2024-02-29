/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:37:37 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/21 13:52:17 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
	char	string[8] = "HolaqTAl";

	if (ft_str_is_alpha(string))
	{
		write(1, "La cadena contiene solo caracteres alfabéticos.\n", 48);
	}
	else
	{
		write(1, "La cadena no contiene solo caracteres alfabéticos.\n", 52);
	}
	return (0);
}*/
