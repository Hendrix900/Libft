/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:22:20 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 03:54:29 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* La función memchr escanea los (n) bytes iniciales 
del área de memoria señalada por (s) hasta encontrar el caracter indicado por c */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*q;
	size_t			l;

	q = (unsigned char*)s;
	l = 0;
	while (++l <= n) //Creamos un bucle para avanzar por la cadena.
		if (*(q++) == (unsigned char)c) // Si q es igual a c.
			return ((void*)--q); // Devuelve un puntero a la dirección de de q, menos una posición.
	return (0); // En los demás casos devolverá NULL
}
