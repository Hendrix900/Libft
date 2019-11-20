/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:22:20 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 13:26:50 by ccastill         ###   ########.fr       */
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
	while (++l <= n)
		if (*(q++) == (unsigned char)c)
			return ((void*)--q);
	return (0);
}
