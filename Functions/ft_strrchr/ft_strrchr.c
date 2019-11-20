/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 22:16:49 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 13:03:27 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strchr devuelve un puntero a la última coincidencia de (c)
en la cadena (s) */

char	*ft_strrchr(const char *str, int c)
{
	char	*end;

	end = 0;
	while (*str)
	{
		if (*str == c)
			end = (char*)str;
		++str;
	}
	if (end)
		return (end);
	if (c == '\0')
		return ((char*)str);
	return (0);
}
