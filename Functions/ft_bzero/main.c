/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:37:52 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/09 00:06:38 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n);

int	main(void)
{
	char str[25] = "Prueba Wind";
	ft_bzero(str, 'p', 25);
	printf("%s\n", str);
	memset(str, 'p', 25);
	printf("%s\n", str);
}