/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:45:17 by chermida          #+#    #+#             */
/*   Updated: 2022/05/25 18:45:20 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str > 122 || *str < 97) && (*str > 90 || *str < 65))
			return (0);
		str++;
	}
	return (1);
}

/*
int main(void)
{
	char a[] = "";
	printf("Nuestro número ganador es el.... %i", ft_str_is_alpha(a));
	return (0);
}
*/