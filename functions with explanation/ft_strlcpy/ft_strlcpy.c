/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:57:52 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 17:34:02 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Devuelve el tamaño de la cadena original, al intentar copiar y conccatenar dos cadenas */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				counter;
	unsigned int	result;

	result = 0;
	if (src == 0 && dest == 0)
		return (0);
	while (src[result] != '\0')
		result++;
	counter = 0;
	while (src[counter] != '\0' && counter < ((int)size - 1))
	{
		dest[counter] = src[counter];
		counter++;
	}
	if (size)
		dest[counter] = '\0';
	return (result);
}
