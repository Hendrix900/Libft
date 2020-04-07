/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:37:52 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/09 00:06:38 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Incluimos la librería que nos permita llamar a la función printf.

void ft_bzero(void *s, size_t n); // Prototipo de la función a la que vamos a llamar en el main.

int	main(void) 
{
	char str[40] = "Definitiva Windows";

	ft_bzero(str, 5);
	printf("%s\n", str); // Muéstrame por pantalla la cadena tras aplicarle la función ft_bzero.
	printf("%s\n", str + 6); /* Muestrame en pantalla la cadena + 5 posiciones, 
								para ver el contenido más allá de la aplicación de la función ft_bzero. */
}
