/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:06:46 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 14:02:19 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* La función memcpy copia tantos (n) bytes de la cadena (src) a la cadena (dest).
Las áreas de memoria no deben solaparse */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*q; 
	unsigned char	*p;
	int				l;

	q = (unsigned char*)src;
	p = (unsigned char*)dest;
	l = 0;
	if (dest == '\0' && src == '\0') //Si las cadenas están vacías devuelve '\0'
		return (0);
	while (n > 0) // Creamos un bucle donde vamos a ir metiendo lo que está en q en p.
	{
		p[l] = q[l];
		l++;
		n--;
	}
	return (dest); //Devuelve un puntero a la cadena de destino
}
