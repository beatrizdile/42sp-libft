/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:42:34 by bedos-sa          #+#    #+#             */
/*   Updated: 2025/11/08 18:31:37 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft.h"
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

#endif