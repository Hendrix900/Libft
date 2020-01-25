/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:02:50 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 04:23:54 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función toupper convierte minúsculas en mayúsculas */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32; // Se resta para convertir en mayúsculas.
		return (c);
	}
	else
		return (c); //Si no hay minúsculas devuelve el valor que se ha pasado
}
