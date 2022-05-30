/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:56:21 by chermida          #+#    #+#             */
/*   Updated: 2022/05/25 17:56:23 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*aux;

	aux = dest;
	while (*src != 0 && n)
	{
		*aux = *src;
		aux ++;
		src ++;
		n --;
	}
	while (n)
	{
		*aux = 0;
		aux ++;
		n--;
	}
	return (dest);
}

/*
int	main(void)
{
	char	a[] = "it'sssssssssssssssssssssssssssssssssssssssssssssss";
	char	b[] = "supercalifragilisticexpialidocious";
	printf("Antes del cammbio %s \n", a);
	ft_strncpy(a, b, 34);
	printf("Despues del cambio %s", a);
	return (0);
}
*/