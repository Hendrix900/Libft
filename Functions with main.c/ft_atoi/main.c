/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:37:52 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 15:41:31 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_itoa(int n);

int main ()
{

	int n;
	n = 123456;
	char *new;

	new = ft_itoa(n);

	printf("La cadena int es %d\n", n);
	printf("La cadena char es %s\n", new);

	return (0);
}
