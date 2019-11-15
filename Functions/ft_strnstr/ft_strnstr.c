/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 10:47:33 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 13:03:09 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (*s2 == '\0')
		return (char*)s1;
	while (*s1 != '\0' && n)
	{
		if (*s1 != *s2)
		{
			while (*(s1 + i) == *(s2 + i) && n - i)
			{
				i++;
				if (*(s2 + i) == '\0')
					return ((char *)s1);
			}
		}
		n--;
		s1++;
	}
	return (NULL);
}
