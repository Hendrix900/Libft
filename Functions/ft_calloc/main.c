/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:52:54 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/18 13:23:12 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main () 
{   
	void* p1;

	p1 = malloc(sizeof (int));

	int * p1_convertido = (int *)p1;
	
	*p1_convertido = 3;
	
	printf("%d\n", *p1_convertido);
   
   return(0);
}