/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:55:59 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/06 13:56:58 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función isprint revisa si el valor c es un carcter printable */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1); //Devuelve distinto de 0 si lo es
	}
	else
		return (0); //Devuelve 0 si no lo es
}
