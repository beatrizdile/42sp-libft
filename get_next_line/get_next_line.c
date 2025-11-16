/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:33:52 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/29 11:04:26 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int				i;
	char			*buffer;
	static char		*total;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0))
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (slash_not_found(total))
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == 0)
			break ;
		buffer[i] = '\0';
		total = add_to_dest(total, buffer);
	}
	free(buffer);
	buffer = str_to_first_n(total);
	total = put_rest_in_total(total);
	if (buffer && buffer[0] == '\0')
	{
		free(buffer);
		free(total);
		buffer = NULL;
	}
	return (buffer);
}
