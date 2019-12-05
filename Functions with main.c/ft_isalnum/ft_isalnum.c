/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:36:31 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 13:34:39 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función isalnum revisa si el valor c es un caracter alfanumérico */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
			|| (c >= 48 && c <= 57))
	{
		return (1); //Devuelve distinto de 0 si lo es
	}
	else
		return (0); //Devuelve 0 si no lo es
}
