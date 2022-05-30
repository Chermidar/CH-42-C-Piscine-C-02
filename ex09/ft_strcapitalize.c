/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:38:17 by chermida          #+#    #+#             */
/*   Updated: 2022/05/26 15:38:21 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != 0)
	{
		if (!((str[j] >= 97 && str[j] <= 122)
				|| (str[j] >= 65 && str[j] <= 90)
				|| (str[j] >= 48 && str[j] <= 57)))
		{
			if ((str[i] >= 97) && (str[i] <= 122))
				str[i] -= 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
		j++;
	}
	return (str);
}

/*
int main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("avadakidivi.... %s", ft_strcapitalize(a));
	return (0);
}
*/