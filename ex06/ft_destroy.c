/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 22:55:15 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/16 09:30:06 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory[i][j] != '\0')
	{
		while (factory[i][j] != '\0')
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
