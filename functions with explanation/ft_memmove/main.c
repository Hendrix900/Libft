/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:18:58 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/12 17:26:46 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char dest[] = "Hola";
	char src[] = "Pepsicola";
	
	ft_memmove(dest, src, 4);
	printf("%s\n", dest);
	memmove(dest, src, 4);
	printf("%s\n", dest);
}