/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:42:26 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/23 11:23:49 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/mandatory.h"

void	ft_send_char(int pid, unsigned char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((c << i) & 0x80)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		usleep(750);
	}
}

void	signal_handler1(int signum, siginfo_t *info, void *ptr)
{
	(void) info;
	(void) ptr;
	if (signum == SIGUSR1)
		write(1, "VU !!\n", ft_strlen("VU !!\n"));
}

void	f(char *a, int pid)
{
	int	k;

	k = -1;
	while (a[++k])
		ft_send_char(pid, a[k]);
	ft_send_char(pid, 0b00000000);
}

int	main(int c, char **v)
{
	int					pid;
	struct sigaction	sa;

	sa.sa_sigaction = signal_handler1;
	sigaction(SIGUSR1, &sa, NULL);
	parse_it(c, v);
	ft_isnumber(v[1]);
	pid = ft_atoi(v[1]);
	f(v[2], pid);
	return (0);
}
