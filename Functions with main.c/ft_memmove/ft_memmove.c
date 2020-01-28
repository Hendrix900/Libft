/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:52:02 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 13:26:59 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* Copia (n) bytes del área de memoria de (src) al área de (dest)
El área de memoria puede solaparse */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *l;
	unsigned char *q;

	l = (unsigned char*)dest;
	q = (unsigned char*)src;
	if ((void*)l == NULL && (void*)q == NULL) // Nos aseguramos de que si nos envían vacias las cadenas no devuelva NULL.
		return (NULL);
	if (l < q) // Si la cadena de destino sea menor que origen entra.
	{
		while (n--) // Vas introducciendo q en l. 
		{
			*(l++) = *(q++);
		}
		return (dest);
	}
	else // en caso de que ambas cadenas sean iguales o l sea más larga.
	{
		while (n--) // vas metiendo q en l.
			l[n] = q[n];
	}
	return (dest); //Devuelve un puntero a la cadena de destino
}
