/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 21:03:03 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/15 22:30:02 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'j') ||
			(str[i] >= 'A' && str[i] <= 'J'))
			str[i] += 16;
		else if ((str[i] >= 'k' && str[i] <= 'z') ||
			(str[i] >= 'K' && str[i] <= 'Z'))
			str[i] -= 10;
		i++;
	}
	return (str);
}
