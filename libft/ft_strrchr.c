/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 22:16:49 by ccastill          #+#    #+#             */
/*   Updated: 2019/12/04 16:49:50 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	const char	*end;

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
