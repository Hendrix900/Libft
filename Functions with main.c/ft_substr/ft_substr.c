/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:03:04 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/27 15:33:11 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h> 

/* La función ft_substr devuelve la cadena (s) empezando desde la posición
indicada por (start) y con el número de caracteres indicado por (len) */

size_t	ft_strlen(const char *str);


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;
	size_t	size;

	if (!s)
		return (0);
	count = 0;
	size = ft_strlen(s + start); /* Mide la cadena s empezando desde la posición start, y el resultado (entero) lo introduce en size. */
	if (size < len)
		len = size;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[count] = '\0';
		return (str);
	}
	while (count < len)
	{
		str[count] = s[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
