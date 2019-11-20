/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:18:50 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 13:27:03 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copia el valor de (c) como unsigned char en los primeros (n) caracteres 
de la cadena apuntada por (str) */

#include "string.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*q;
	int				l;

	q = (unsigned char*)str;
	l = 0;
	while (n > 0)
	{
		q[l] = c;
		l++;
		n--;
	}
	return (str); //Devuelve la cadena
}
