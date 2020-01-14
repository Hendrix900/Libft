/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:39:22 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/20 12:39:22 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Incluimos la librería que nos permita llamar a la función printf.


int ft_isalnum(int c); //Prototipo de la función que voy a llamar

int main(void)
{
        int a;

        a = ft_isalnum(53);
        printf( "%d\n", a);
}

