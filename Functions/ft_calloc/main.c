/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:52:54 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/18 16:34:36 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main () 
{   
	int *a;
	a = malloc(sizeof(int));
	*a = 5;
	
	printf("%d\n", a);

   return(0);
}