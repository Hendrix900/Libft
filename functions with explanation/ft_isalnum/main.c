/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:39:22 by ccastill          #+#    #+#             */
/*   Updated: 2020/04/16 01:07:55 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Incluimos la librería que nos permita llamar a la función printf.


int ft_isalnum(int c); //Prototipo de la función que voy a llamar

int main(void)
{
        int a;

        a = ft_isalnum('c');
        printf( "%d\n", a);
}

