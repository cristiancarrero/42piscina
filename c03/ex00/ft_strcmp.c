/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:17:52 by ccarrero          #+#    #+#             */
/*   Updated: 2024/02/25 12:22:47 by ccarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "TenGo! Hambre";
	char s2[] = "Tengo Hambre";

	int result = ft_strcmp(s1, s2);
	char result_str;
	if (result == 0)
	{
		result_str = '0';
	}
	else if (result < '0')
	{
		result_str = '-';
	}
	else
	{
		result_str = '+';
   	}
	write(1, "Resultado: ", 11);
	write(1, &result_str, 1);
	return (0);
}*/
