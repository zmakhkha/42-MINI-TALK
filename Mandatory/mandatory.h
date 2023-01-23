/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:52:53 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/01/23 10:50:20 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANDATORY_H
# define MANDATORY_H

# include <signal.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

void	ft_set_char(char *c, int bit, int pos);
void	ft_isnumber(char *number);
void	parse_it(int n, char **c);
void	ft_print_error(char *c);

#endif