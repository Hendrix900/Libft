/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:22:38 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/22 17:22:38 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_count_fil(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static int	ft_count_colum(char const *s, char c)
{
	int	count;
	int l;

	l = 0;
	count = 0;
	while (s[l] && s[l] != c)
	{
		count++;
		l++;
	}
	return (count);
}

char		**ft_cpbi(char **new, char const *s, char c, int fil)
{
	int l;
	int q;

	l = 0;
	q = 0;
	while (l < fil)
	{
		while (s[q] && s[q] == c)
			q++;
		new[l] = ft_substr(s, q, ft_count_colum(s + q, c));
		while (s[q] && s[q] != c)
			q++;
		l++;
	}
	new[l] = NULL;
	return (new);
}

char		**ft_split(char const *s, char c)
{
	char	**new;
	int		fil;

	if (!s || !c)
		return (NULL);
	fil = ft_count_fil(s, c);
	new = (char**)malloc((fil + 1) * sizeof(char*));
	if (new == NULL)
		return (NULL);
	new[fil] = NULL;
	new = ft_cpbi(new, s, c, fil);
	return (new);
}
