/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:20:45 by chermida          #+#    #+#             */
/*   Updated: 2022/05/24 10:20:48 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*src != 0)
	{
		*aux = *src;
		aux++;
		src++;
	}
	*aux = 0;
	return (dest);
}

/*
int	main(void)
{
	char	a[] = "hola";
	char	b[] = "adios";
	printf("Antes del cammbio a es %s\n", a);
	ft_strcpy(a, b);
	printf("Despues del cambio a es %s\n", a);
	return (0);
}
*/