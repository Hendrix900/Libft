/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:03:04 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/20 19:03:04 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_substr devuelve la cadena (s) empezando desde la posición
indicada por (start) y con el número de caracteres indicado por (len) */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
char	*str;
size_t	count;
size_t	size;

count = 0;
if (!s)
	return (0);
if (strlen(s) < start)
	return (0);
size = ft_strlen(s + start); // cadena s + empezar en la posición de start
if (size < len)
	len = size;
str = malloc((len + 1) * sizeof(char));
 while (count < len)
    {
        str[count] = s[start + count];
        count++;
    }
str[count] = '\0';
return (str);
}
