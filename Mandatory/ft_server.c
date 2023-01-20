/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:42:08 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/20 19:14:37 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"
int i = 0;
int	main(void)
{
	int	pid;

	i = 0;
	pid = getpid();
	write(1, "This is my pid :", ft_strlen("this is my pid : "));
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	
	while (1)
	{
		signal(SIGUSR1, signal_handler);
		signal(SIGUSR2, signal_handler);
	}
	return (0);
}
