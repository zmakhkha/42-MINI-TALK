/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:42:26 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/20 19:06:02 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"


void f(char *a, int pid)
{
	int k;
	int j;
	char	tmp;

	k = 0;
	while (a[k])
	{
		tmp = a[k];
		j = 0;
		while (j < 8)
		{
			if (!!((tmp << j) & 0x80))
			{
				kill(pid, SIGUSR1); // send 1
				//write(1, "1", 1);
			}
			else
			{
				kill(pid, SIGUSR2); // send 0
				//write(1, "0", 1);
			}
			j++;
			usleep(750);
		}
		k++;
	}
}


int	main(int c, char **v)
{
	int		pid;

	parse_it(c ,v);
	pid = ft_atoi(v[1]);
	f(v[2], pid);
	printf("\n");
		
	return (0);
}

