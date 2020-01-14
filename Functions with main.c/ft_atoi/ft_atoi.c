/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:02:08 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 15:51:27 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función ft_atoi transforma una cadena de carácteres numéricos (Cadena char) en un int.
Este entero tiene un rango de -2147483648 a 2147483647. Todo lo que salga de ese rango no lo puede recoger la función. 
*/

int	ft_atoi(const char *str) // La función devolverá un entero y recogerá un constant char *. 
{
	int	conversion; // Necesitamos un valor que recoja el entero de la conversión.
	int negative; // Este int nos servirá para transformar o no todo posible número negativo.
	int l; // El contador del array.

	/* Inicializamos todos los enteros a 0, salvo el negative que lo dejaremos en 1. 
	Al multiplicar todo número por 1 obtenemos el mísmo número. Esta operación la veremos más adelante 
	y nos permitirá transformar el caso de un posible negativo */

	l = 0;
	conversion = 0;
	negative = 1; 
	
	/* Creamos un bucle para avanzar por la cadena hasta que la posición de la cadena en la que se encuentre sea igual a NUll.
	Si a lo largo del recorrido se encuentra con alguno de los signos indicados le decimos que siga avanzando. 
	 ' ' = Espacio.                    '\v' = Tabulador vertical
	 '\n' = Salto de línea             '\f' = Alimentación de hoja
	 '\t' = Tabulador horizontal       '\r' = retorno de carro 
	 
	 Si se encuentra cualquier otra cosa, queremos que salga de este primer bucle, por ello el break.
	 */

	while (str[l] != '\0')
	{
		if (str[l] == ' ' || str[l] == '\n' || str[l] == '\t' ||
			str[l] == '\v' || str[l] == '\f' || str[l] == '\r')
			l++;
		else
			break ; // Sal del bucle.
	}
	if (str[l] == '-') //Si en el recorrido de la cadena se encuentra un - sabremos que es un número negativo, por ello
		negative = -1; //Transformamos negative en -1 para que el resultado final sea negativo.
	if (str[l] == '-' || str[l] == '+') // Del mismo modo, si se encuentra un - o un + queremos que siga avanzando por la cadena.
		l++;
	while (str[l] >= '0' && str[l] <= '9') // Si lo que se encuentra está comprendido entre el 0 y el 9, procederemos a realizar la conversión del char al int.
	{
		/*La sigueinte operación transformará el char en int.
		Para ello utilizaremos el entero "conversion" que comienza siendo 0 para que al multiplicarlo por 10 nos de el número que sea "conversión" en cada momento.
		A este número le sumamos el resultado de restar el char de la cadena (Que siempre es un número de la tabla ASCII) por 48, que representa el 0 en ASCII,
		por lo que el resultado siempre será el mismo número que queremos convertir.*/

		/* Ejemplo:
		Char = '56'
		conversion = 0
		(El número char '5','6' se ha transformado a su valor numérico ASCII en las operaciones matemáticas de abajo.)
		0 * 10 + (53 - 48)
		0 * 10 = 0 + (53 - 48) = 5
		5 * 10 = (54 - 48)
		5 * 10 = 50 + (54 - 48) = 56
		*/

		conversion = conversion * 10 + (str[l] - 48); //Transforma el char en int
		l++;
	}
	/* Para finalizar devolveremos un entero que será el resultado de multiplicar conversión, que será nuestro número ya convertido a Int por el negativo, que
	dependiendo de si en la cadena había un - será un 1 o un -1.*/
	
	return (conversion * negative);
}
