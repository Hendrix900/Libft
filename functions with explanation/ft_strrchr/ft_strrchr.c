/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 22:16:49 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 05:23:35 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strchr devuelve un puntero a la última coincidencia de (c)
en la cadena (s) */

char	*ft_strrchr(const char *s, int c)
{
	const char *last_pos; // Creamos una variable que será la que se devolverá.

	last_pos = NULL; // La inicializamos a NULL
	while (*s != '\0') // En este bucle haremos que avance por la cadena hasta encontrar la última coincidencia, o hasta que se acabe la cadena.
	{
		if (*s == c) 
			last_pos = s; // Una vez se encuentre con c, s pasará a ser last_pos
		s++;
	}
	if (last_pos)
		return ((char*)last_pos); // PAra acabar, devolveremos last_post.
	if (c == '\0') // EN caso de que c sea NULL que devuelva la cadena.
		return ((char*)s);
	return (NULL); // Devolverá NULl en los demás casos.
}
