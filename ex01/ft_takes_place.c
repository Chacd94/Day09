/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:44:16 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/16 10:08:19 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		heure(int hour)
{
	if (hour >= 13 && hour <= 23)
		return (hour - 12);
	if (hour == 0 || hour == 24)
		return (12);
	else
		return (hour);
}

char	ap(int hour)
{
	if ((hour >= 0 && hour <= 11) || hour == 24)
		return ('A');
	else
		return ('P');
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n",
			heure(hour), ap(hour), heure(hour + 1), ap(hour + 1));
}
