/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:47:37 by ccastill          #+#    #+#             */
/*   Updated: 2020/04/16 23:53:23 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strchr devuelve un puntero a la primera coincidencia de (c)
en la cadena (s) */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s); // La función devuelve un char * por lo que casteamos s que es un const char.
		++s;
	}
	if (c == '\0') // En caso de que llegue al final de la cadena, que devuelva toda la cadena.
		return ((char*)s);
	return (0);
}
