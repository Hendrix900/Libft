/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:47:37 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 12:59:57 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strchr devuelve un puntero a la primera coincidencia de (c)
en la cadena (s) */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		++s;
	}
	if (c == '\0')
		return ((char*)s);
	return (0);
}
