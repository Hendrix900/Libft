/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:50:56 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 13:35:17 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función isalpha revisa si el valor c es un caracter alfabético */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) //Mayúsculas y minúsculas
	{
		return (1); //Devuelve distinto de 0 si lo es
	}
	else
		return (0); //Devuelve 0 si no lo es
}
