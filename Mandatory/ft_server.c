/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:42:08 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/21 11:01:16 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"
int i = 0;
int	main(void)
{
	int					pid;
	struct sigaction	sa;

	i = 0;
	pid = getpid();
	
	write(1, "This is my pid :", ft_strlen("this is my pid : "));
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	
	sa.sa_handler = signal_handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGINT);
	
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
	}
	
	return (0);
}
