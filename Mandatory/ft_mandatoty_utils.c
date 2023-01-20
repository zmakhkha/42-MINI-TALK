/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandatoty_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:06:32 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/20 19:01:26 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"
char c = 0;

void signal_handler(int signum)
{
	//static unsigned char c;
	static int i;

	if (signum == SIGUSR1)
	{
		c = (c << 1) | 1;
		i++;
		//write(1, "1", 1);
	}
	else if (signum == SIGUSR2)
	{
		c = (c << 1) | 0;
		i++;
		//write(1, "0", 1);
	}
	if (i == 8)
	{
		write(1, &c, 1);
		c = 0;
		i = 0;
	}
	//else
	//	i++;
}

void ft_print_error(char *c)
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
