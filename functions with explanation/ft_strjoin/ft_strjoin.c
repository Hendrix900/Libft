/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:20:29 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/27 15:14:58 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función ft_strjoin combina las dos cadenas que se pasen en una nueva cadena. */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*srt; // Nueva cadena que se devolverá.
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL) // Si las cadenas están vacías devuelve NULL.
		return (NULL);
	srt = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)); //Reservamos en srt el tamaño necesaario para almacenar las dos cadenas + 1 para almacenar el NULL final.
	if (srt == NULL) // Si srt es NULL devuelve NULL.
		return (NULL);
	while (s1[j] != '\0') // Entra en el bucle hasta que s1 exista.
		srt[i++] = s1[j++]; // Mete s1 en srt.
	j = 0;
	while (s2[j] != '\0') // Entra en el bucle hasta que s2 exista.
		srt[i++] = s2[j++]; // Mete S2 en srt.
	srt[i] = '\0'; // Añade el NULL final a la nueva cadena.
	return (srt); // Devuelve la nueva cadena.
}
