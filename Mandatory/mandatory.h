/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:52:53 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/13 16:32:43 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANDATORY_H
# define MANDATORY_H

# include <signal.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

void	signal_handler(int signum);
void	parse_it(int n, char **c, int i);
void	ft_print_error(char *c);

#endif