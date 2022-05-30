/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:38:49 by chermida          #+#    #+#             */
/*   Updated: 2022/05/26 12:09:20 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 0 && str[i] < 48)
			return (0);
		else if (str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	char a[] = "01101000011011110110110001100001";
	printf("Nuestro número ganador es el.... %i", ft_str_is_numeric(a));
	return (0);
}
*/
