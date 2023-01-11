/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:42:08 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/11 19:09:06 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"

int	main(void)
{
	int	pid;

	pid = getpid();
	printf("\n* this is my pid :%d\n", pid);
	while (1)
	{
		signal(SIGUSR1, signal_handler);
	}
	return (0);
}
