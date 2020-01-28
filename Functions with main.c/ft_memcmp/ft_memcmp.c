/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:24:12 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 04:12:38 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* La función memcmp compara el número de bytes indicado por (n)
convertidos a unsigned char de las áreas de memoria s1 y s2, y devuelve la diferencia
entre los primeros caracteres distintos encontrados.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*q;
	unsigned char	*p;
	size_t			l;

	q = (unsigned char*)s1;
	p = (unsigned char*)s2;
	l = 0;
	if (n == 0) // Protección, en caso de que se pase 0 en n nos devolverá NULL
		return (0); 
	while (*q == *p && ++l < n) // Avanza siempre que los caractres encontrados coincida.
	{
		q++;
		p++;
	}
	return ((int)(*q - *p)); // Devuelve la resta resultante de los caracteres diferentes de las dos cadenas.
}
