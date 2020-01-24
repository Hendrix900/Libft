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

/* Esta función nos permitirá  */

int		ft_count_nb(int nb)
{
	int				count;
	unsigned int	c;

	c = 0;
	count = 0;
	if (nb < 0)
	{
		c = nb * -1;
		count++;
	}
	if (nb > 0)
		c = nb;
	while (c >= 10)
	{
		c = c / 10;
		count++;
	}
	if (c < 10)
		count++;
	return (count);
}

void	ft_putnum(char *s, int n, int l)
{
	unsigned int c;

	c = 0;
	s[l--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		c = n * -1;
	}
	if (n > 0)
		c = n;
	while (c > 10 || (c <= 10 && c != 0))
	{
		s[l--] = c % 10 + 48;
		c = c / 10;
	}
}

/* Esta será la función principal. Recogerá un int y devovlerá un char *. */ 
char	*ft_itoa(int n)
{
	char	*new; // Creamos una nueva cadena que se encargará de recoger el valor que devolveremos.
	int		l; // Creamos un entero que nos servirá para guardar el resultado de la función ft_count_nb. 

	if (n < -2147483648) // Con esta condición nos aseguramos que si el valor que nos pase se encuentre dentro del rango que acepta el int.
		return (NULL); // Si nos pasan algo inferior a ese rango, nos devolverá NULL.
	l = ft_count_nb(n); // Introducimos en l el valor devuelto por ft_count_nb
	new = (char*)malloc(sizeof(char) * l + 1);
	if (new == 0)
		return (NULL);
	ft_putnum(new, n, l);
	return (new);
}