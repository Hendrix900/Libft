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

#include <string.h> //Incluimos la librería en la que se encuentre la estructura size_t que utilizaremos en la función.

/*La función bzero borra tantos bytes de la memoria como el número indicado por (n) añadiendo '\0'
a la localización de la cadena apuntada por s */ 

void	ft_bzero(void *s, size_t n)
{
	int				l; // El contador de la cadena.
	unsigned char	*q; // inicializamos una variable del tipo unsigned char ya que sólo queremos que nos recoja el tipo char sin signo.
						// En caso de que nos manden una cadena de enteros, estos se transformarán a valores char de la tabla ASCII.

	q = (unsigned char*)s; //Casteo, conversión de s a unsigned char, e introducción del valor en q
	l = 0;
	while (n > 0)
	{
		q[l] = 0;
		l++;
		n--; //Se va reduciendo el valor de n para terminar el bucle.
	}
}
