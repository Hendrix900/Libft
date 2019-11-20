/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:54:44 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/06 13:55:25 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función isdigit revisa si el valor c es un valor numérico */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1); //Devuelve distinto de 0 si lo es
	}
	else
		return (0); //Devuelve 0 si no lo es
}
