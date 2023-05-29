/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:29:17 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/05/01 16:50:23 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// RETURN VALUE: The strlen() function returns the number of bytes in the 
// string str.

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
