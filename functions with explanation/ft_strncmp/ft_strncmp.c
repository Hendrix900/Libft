/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:00:57 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 05:57:01 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función strncmp compara el número de bytes indicado por (n) 
de las áreas de memoria s1 y s2, y devuelve la diferencia
entre los primeros caracteres distintos encontrados.*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a] && a < n - 1)
	{
		a++;
	}
	return (unsigned char)s1[a] - (unsigned char)s2[a];
}
