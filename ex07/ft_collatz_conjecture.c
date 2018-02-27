/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 09:32:15 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/16 10:07:43 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int vol;

	if (base == 1)
		return (1);
	if (base % 2 == 0)
	{
		vol = (ft_collatz_conjecture(base / 2));
	}
	else
	{
		vol = (ft_collatz_conjecture(base * 3 + 1));
	}
	return (vol + 1);
}
