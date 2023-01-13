/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:42:26 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/13 19:08:07 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"

int	main(int c, char **v)
{
	int		pid;
	int		j;
	int		k;
	char	tmp;

	parse_it(c ,v, 1);
	(void)c;
	pid = ft_atoi(v[1]);

	printf("%d", !!((tmp << j) & 0x80));
	k = 0;
	while (v[1][k])
	{
		tmp = v[1][k];
		j = 0;
		while (j < 7)
		{
			if (!!((tmp << j) & 0x80))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			j++;
		}
		k++;
	}
	printf("\n");
		
	return (0);
}
