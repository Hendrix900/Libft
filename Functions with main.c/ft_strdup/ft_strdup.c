/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:08:21 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/27 15:09:30 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* La función ft_strdup duplica la cadena que se manda en una nueva cadena. Devuelve un puntero a la dirección de memoria de la nueva cadena. */

char	*ft_strdup(const char *src) // La función acepta un puntero a la cadena y devuelve un puntero a la nueva cadena.
{
	char	*new; // Se crea una nueva variable donde se almacenará la nueva cadena.
	int		i; // Contador
	int		size; // Contador

	size = 0;
	while (src[size])
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1)))) // Se reserva la memoria necesaria en new para almacenar la cadena de origen + 1 para almacenar el NULL.
		return (NULL); // En caso en que new no almacene, se devolverá NULL.
	i = 0;
	while (src[i])
	{
		new[i] = src[i]; // Metemos src en new.
		i++;
	}
	new[i] = '\0'; // Añadimos el NULL final.
	return (new); // Devolvemos la nueva cadena.
}