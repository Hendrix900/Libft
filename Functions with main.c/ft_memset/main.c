/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:18:58 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/08 14:25:05 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n);

int	main(void)
{
	char cadena[] = "Hola que tal?";
	ft_memset(cadena, 'K', 5);
	printf("%s\n", cadena);
	memset(cadena, 'p', 13);
	printf("%s\n", cadena);
}