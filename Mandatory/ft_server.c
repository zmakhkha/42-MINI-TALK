/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:42:08 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/23 09:41:26 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"

void	ft_print_reset(int *i, unsigned char *c)
{
	write(1, c, 1);
	*c = 0;
	*i = 0;
}

void	signal_handler(int signum, siginfo_t *info, void *ptr)
{
	static int				i;
	static unsigned char	c;
	static pid_t			pid;

	(void)ptr;
	if (pid != info-> si_pid)
	{
		c = 0;
		i = 0;
		pid = info->si_pid;
	}
	if (signum == SIGUSR1)
	{
		c = (c << 1) | 1;
		i++;
	}
	else if (signum == SIGUSR2)
	{
		c = (c << 1) | 0;
		i++;
	}
	if (i == 8)
		ft_print_reset(&i, &c);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	pid = getpid();
	write(1, "This is my pid :", ft_strlen("this is my pid : "));
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	sa.sa_sigaction = signal_handler;
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
	return (0);
}
