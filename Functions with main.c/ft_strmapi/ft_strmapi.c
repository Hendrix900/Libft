/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:03:43 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/27 22:19:47 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_strmapi reserva memoria para crear una nueva cadena que contenga 
una copia de la cadena mandada con las modificaciones de la funcion indicada*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	
	int	l;
	
	if (!(new = malloc(sizeof(char) * (ft_strlen(s) + 1 )
		return (NULL);
	while (s[l])
	{	
		new[l] = f(l, s[l]);
		l++;
	}
	new[l] = '\0';
	return (new);
}
