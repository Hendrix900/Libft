/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:48:35 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/13 21:48:35 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main () {
	const char str[] = "hoca";
  	char *ret;

   	ret = ft_strchr(str, 'o');

   	printf("%s\n", ret);
   
   	return(0);
}
