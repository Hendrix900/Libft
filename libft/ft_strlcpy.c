/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:57:52 by ccastill          #+#    #+#             */
/*   Updated: 2019/12/02 15:27:46 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		counter;
	size_t	result;

	result = 0;
	if (src == 0 && dest == 0)
		return (0);
	while (src[result] != '\0')
		result++;
	counter = 0;
	while (src[counter] != '\0' && counter < ((int)size - 1))
	{
		dest[counter] = src[counter];
		counter++;
	}
	if (size)
		dest[counter] = '\0';
	return (result);
}
