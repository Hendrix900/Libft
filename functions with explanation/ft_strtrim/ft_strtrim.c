/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 22:10:04 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/25 19:44:13 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src);

size_t    cstart(char const *s1, char const *set)
{
	size_t    count_s;
	int       q;
	int       l;
	count_s = 0;
	q = 0;
	while (*s1)
	{
		l = 0;
		while (set[l] != '\0')
		{
			if (set[l] == *s1)
			{
				count_s++;
				break;
			}
			l++;
		}
		if (!set[l])
			return (count_s);
		s1++;
	}
	return (count_s);
}
size_t    cend(char const *s1, char const *set)
{
	size_t    count_e;
	size_t    len;
	int        l;
	count_e = 0;
	len = ft_strlen(s1) - 1;
	while (len > 0)
	{
		l = 0;
		while (set[l] != '\0')
		{
			if (set[l] == s1[len])
			{
				count_e++;
				break;
			}
			l++;
		}
		if (!set[l])
			return (count_e);
		len--;
	}
	return (count_e);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	int		l;
	size_t	len;
	if (s1 == NULL || set == NULL)
		return (NULL);
	start = cstart(s1, set);
	end = cend(s1, set);
	len = ft_strlen(s1);
	l = 0;
	if (start == len)
    {
        new = ft_strdup("");
        return (new);
    }
	if (!(new = (char*)malloc(sizeof(char) * (len - (start + end)) + 1)))
		return (NULL);
	while (start < len - end)
		new[l++] = s1[start++];
	new[l] = '\0';
	return (new);
}

