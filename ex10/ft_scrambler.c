/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 12:48:50 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/16 14:39:18 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmp1;
	int tmp2;

	tmp1 = *******c;
	tmp2 = ****d;
	*******c = ***a;
	****d = tmp1;
	tmp1 = *b;
	*b = tmp2;
	***a = tmp1;
}
