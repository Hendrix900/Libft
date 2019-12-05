/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:20:29 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/21 12:52:20 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*srt;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	srt = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (srt == NULL)
		return (NULL);
	while (s1[j] != '\0')
		srt[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		srt[i++] = s2[j++];
	srt[i] = '\0';
	return (srt);
}
