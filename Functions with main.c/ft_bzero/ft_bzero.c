/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:36:45 by ccastill          #+#    #+#             */
/*   Updated: 2019/12/05 17:21:03 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/*La función bzero borra tantos bytes de la memoria indicados por (n) añadiendo '\0'
a la localización apuntada por s */ 

void	ft_bzero(void *s, size_t n)
{
	int				l;
	unsigned char	*q;

	q = (unsigned char*)s; //Casteo, conversión de s a unsigned char, e introducción del valor en q
	l = 0;
	while (n > 0)
	{
		q[l] = 0;
		l++;
		n--; //Se va reduciendo el valor de n para terminar el bucle.
	}
}
