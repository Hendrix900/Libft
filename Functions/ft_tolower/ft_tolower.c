/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:01:35 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/12 13:43:23 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función tolower convierte mayúsculas en minúsculas */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c); //Si no hay minúsculas devuelve el valor que se ha pasado
}
