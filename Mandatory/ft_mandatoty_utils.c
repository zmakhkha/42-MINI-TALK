/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandatoty_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:06:32 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/11 19:08:14 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"

void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
	{
		printf("The client is sending ....!\n");
	}
	if (signum == SIGUSR2)
	{
		printf("Attention the Server is talking ....!\n");
	}
}