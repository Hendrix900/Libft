/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 00:21:59 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/26 00:21:59 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_itoa(int n);

int main ()
{

int n;
n = 358;
char *new;

new = ft_itoa(n);

printf("La cadena char es %s\n", new);

return (0);
}