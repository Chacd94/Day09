/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 10:12:01 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/16 14:03:23 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

int		mot_espaces(char *chaine, char *mot)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (chaine[j] == ' ')
		j++;
	while (chaine[j] != '\0' && mot[k] != '\0' && chaine[j] == mot[k])
	{
		j++;
		k++;
	}
	if (mot[k] == '\0')
	{
		while (chaine[j] == ' ' && chaine[j] != '\0')
			j++;
		if (chaine[j] == '\0')
		{
			return (1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*p;
	char	*a;
	char	*b;

	p = "president";
	a = "attack";
	b = "bauer";
	i = 1;
	while (i <= argc - 1)
	{
		argv[i] = ft_strlowcase(argv[i]);
		if (mot_espaces(argv[i], p) == 1 || mot_espaces(argv[i], a) == 1 ||
			mot_espaces(argv[i], b) == 1)
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
