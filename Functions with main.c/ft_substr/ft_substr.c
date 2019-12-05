/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:03:04 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/21 14:53:03 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_substr devuelve la cadena (s) empezando desde la posición
indicada por (start) y con el número de caracteres indicado por (len) */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;
	size_t	size;

	if (!s)
		return (0);
	count = 0;
	size = ft_strlen(s + start); /* cadena s + empezar en la posición de start */
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
