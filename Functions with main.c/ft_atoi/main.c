/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:37:52 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 15:41:31 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Incluimos la librería que nos permita llamar a la función printf.

int	ft_atoi(const char *str); //Prototipo de la función a la que vamos a llamar en el main.

int main ()
{

	char *str = "-589462"; // Creamos un puntero a char tal como se indica en el prototipo de la función ft_atoi.
	int new; // Creamos un entero que va a recoger el valor devuelto por la función ft_atoi.

	new = ft_atoi(str); // Metemos en new el entero que devuelve la función ft_atoi tras convertir la cadena str.

	printf("La cadena char es %s\n", str); // Sácame por pantalla la cadena de caracteres antes de la conversión.
	printf("La cadena transformada en int es %d\n", new); // Sácame por pantalla el int generado tras la conversión aplicada por la función.

	return (0);
}
