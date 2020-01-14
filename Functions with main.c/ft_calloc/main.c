/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:52:54 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/18 16:34:36 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Incluimos la librería que nos permita llamar a la función printf.

void	*ft_calloc(size_t count, size_t size); // Prototipo de la función que vamos a utilizar

int main (void)
{
	int *p;
	p = (int*)ft_calloc(5, 4);

	printf("%ls\n", p); // Muéstrame por pantalla la cadena tras aplicarle la función ft_calloc.
	
}