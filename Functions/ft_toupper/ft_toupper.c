/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:02:50 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/06 14:03:27 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función toupper convierte minúsculas y mayúsculas */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c); //Si no hay minúsculas devuelve el valor que se ha pasado
}
}
