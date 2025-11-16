/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:42:34 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/31 11:10:56 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int			slash_not_found(char	*str);
char		*get_next_line(int fd);
char		*put_rest_in_temp(char	*buf);
char		*add_to_dest(char	*dest, char	*src);
char		*put_rest_in_total(char	*buf);
char		*str_to_first_n(char	*buf);
size_t		ft_strlen(char *str);

#endif