/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:59:09 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 13:27:11 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función strlen calcula la longitud de la cadena apuntada por (s)
excluyendo el valor '\0' al final de la cadena */

size_t	ft_strlen(const char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c); //Devuelve un int con la longitud de la cadena
}
