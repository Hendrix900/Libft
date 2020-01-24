/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 00:21:06 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/26 00:21:06 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <stdlib.h> /* Incluimos esta librería para poder utilizar la función malloc */

/* La función ft_itoa convierte un entero a una cadena de caracteres.

/* La función ft_itoa se compone de 3 funciones. Siendo el orden de lectura del programa el siguiente: 
char   *ft_itoa(int n)
int		ft_count_nb(int nb)
void	ft_putnum(char *s, int n, int l)
*/

/* Esta función nos permitirá contar el total de carácteres de la cadena int que queremos transformar.
 recogemos un int que será igual al valor que nos pasen el la función principal, y devolveremos un entero que será el tamaño de la cadena. */
int		ft_count_nb(int nb)
{
	int				count; // Creamos un entero que será el contador principal que devolveremos
	unsigned int	c; // creamos otro entero que utilizaremos para duplicar el valor de nb y poder utilizarlo.

	c = 0;
	count = 0;
	if (nb < 0) // 
	{
		c = nb * -1; // Copiamos en c su valor pero multiplicado por -1 con lo que convertimos en positivo el número.
		count++; // Incrementamos el contador una posición, que representará el símbolo - de delante.
	}
	if (nb > 0) // 
		c = nb; // Igualamos c a nb.
	while (c >= 10) // En este bucle descomponemos el número, incrementando el contador por cada posición, resultado de la descomposición del número.
    {
		c = c / 10;
		count++;
	}
	if (c < 10) // esta última condición nos permitirá incrementar el contador cuando el número que se ha descompuesto anteriormente no sea más que un dígito.
		count++;
	return (count); // Devolvemos el contador que nos permitirá crear una cadena del tamaño deseado.
}

/* Con esta función convertiremos el int al char. */

void	ft_putnum(char *s, int n, int l) 
{
	unsigned int c;

	c = 0;
	s[l--] = '\0'; // l nos indica el tamaño de la cadena que hemos reservado, indicamos Aquí que en la última posición de la cadena incluya el NULL.
	if (n == 0) // Si el valor pasado es 0
		s[0] = '0'; // Ponme 0 en la primera posición de la cadena.
	if (n < 0)
	{
		s[0] = '-'; // Si es menor que 0 quiero un - en la primera posición de la cadena
		c = n * -1; // En c me conviertes el negativo en positivo.
	}
	if (n > 0) // En caso de que n sea mayor que cero.
		c = n; // Igualame n a c.
	while (c > 10 || (c <= 10 && c != 0)) // Mientras c sea mayor que 0 o esté comprendido entre el 1 y el 9
	{
		s[l--] = c % 10 + 48; // Desde la penúltima posición de la cadena vamos convirtiendo el número a char, Sacamos el resto de dividir el número, lo que nos da el último número de la cadena y le sumamos 48 por ser el valor '0' del ascii. 
		c = c / 10; // dividimos para descomponer el número y que así vaya avanzando.
	}
}

/* Esta será la función principal. Recogerá un int y devovlerá un char *. */ 
char	*ft_itoa(int n)
{
	char	*new; // Creamos una nueva cadena que se encargará de recoger el valor que devolveremos.
	int		l; // Creamos un entero que nos servirá para guardar el resultado de la función ft_count_nb. 

	if (n < -2147483648) // Con esta condición nos aseguramos que si el valor que nos pasan se encuentre dentro del rango inferior que acepta el int. (Creo que esta condición no sirve de nada)
		return (NULL); // Si nos pasan algo inferior a ese rango, nos devolverá NULL.
	l = ft_count_nb(n); // Introducimos en l el valor devuelto por ft_count_nb
	new = (char*)malloc(sizeof(char) * l + 1); // Reservamos la memoria necesaria para almacenar la cadena + 1 para la última posición de NULL. Casteamos como medida de seguridad.
	if (new == 0) // aplicamos esta condición por precaución, en caso de que nos pasen un 0 devolveremos un 0.
		return (NULL);
	ft_putnum(new, n, l); // Esta función nos permitirá llevar a cabo la conversión definitica. Pasando la cadena reservada con malloc, el valor original a convertir, y el contador.
	return (new); // Devovleremos la cadena char ya convertida.
}