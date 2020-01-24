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

#include <string.h> 

/*Introducimos la función ft_bzero debido a que la utilizamos en ft_calloc, y es requerida a la hora de compilar.
Para conocer el funcionamiento de esta función acudir a la función original*/

void	ft_bzero(void *s, size_t n)
{
	int				l; 
	unsigned char	*q; 
	
	q = (unsigned char*)s; 
	l = 0;
	while (n > 0)
	{
		q[l] = 0;
		l++;
		n--;
	}
}
