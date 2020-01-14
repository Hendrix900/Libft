/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:48:45 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/18 16:09:41 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> /* Introducimos esta librería para poder utilizar la función malloc */

void	ft_bzero(void *s, size_t n); /* Necesitamos incluir el prototipo de la función para poder utilizar ft_bzero a la hora de compilar.

/*La función ft_calloc asigna memoria para un puntero de un número de elementos determinado y de un tamaño concreto. 
Inicializando todos los bytes a cero. La función Calloc cumple la misma función de malloc, pero inicializando a 0 el contenido*/

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr; //Creamos una variable puntero.

	ptr = malloc(count * size); // Con malloc reservamos memoria para los valores pasados en "count" y "size" en ptr.
	if (ptr == NULL) // Esto nos sirve para asegurarnos, en caso de que los valores que nos pasan sean 0, devolveremos la cadena.
		return (ptr);
	ft_bzero(ptr, size * count); // Utilizamos la función ft_bzero para rellenar de NULL la cadena ptr.
	return (ptr); // Devolvemos la cadena ptr.
}
