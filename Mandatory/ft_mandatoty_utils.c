/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandatoty_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:06:32 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/13 19:04:21 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"

void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		write(1, "1\n", 2);
	if (signum == SIGUSR2)
		write(1, "0\n", 2);
}

void	ft_print_error(char *c)
{
	write(1, c, ft_strlen(c));
	write(1, "\n", 1);
	exit(1);
}
void	parse_it(int n, char **c, int i)
{
	if (!i && n != 1)
		ft_print_error("Error !!");
	if ((i && n != 3))
		ft_print_error("Youre program will crash !!");
	if (ft_atoi(c[2]) == -1)
		ft_print_error("haha");
		
}