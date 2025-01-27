/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:52:51 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/06 13:54:21 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función isascii revisa si el valor c está dentro de la tabla ascii */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1); //Devuelve distinto de 0 si lo es
	}
	else
		return (0); //Devuelve 0 si no lo es
}
