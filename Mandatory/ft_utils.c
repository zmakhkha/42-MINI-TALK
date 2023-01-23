/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:06:32 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/23 10:50:05 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"

void	ft_print_error(char *c)
{
	write(1, c, ft_strlen(c));
	write(1, "\n", 1);
	exit(1);
}

void	parse_it(int n, char **c)
{
	if (n != 3 || ft_atoi(c[1]) <= 0)
		ft_print_error("ERROR !!");
}

void	ft_isnumber(char *number)
{
	int	i;

	i = 0;
	if (number[0] == '+')
		i++;
	if (!number[i])
		ft_print_error("Error");
	while (number[i])
	{
		if (!ft_isdigit(number[i]))
			ft_print_error("Error");
		i++;
	}
}
