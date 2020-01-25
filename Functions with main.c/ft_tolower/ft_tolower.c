/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:01:35 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 04:22:41 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función tolower convierte mayúsculas en minúsculas */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32; // Se suma 32 a c para convertir en minúsculas.
		return (c);
	}
	else
		return (c); //Si no hay minúsculas devuelve el valor que se ha pasado
}
