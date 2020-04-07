/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:48:35 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 04:48:25 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main () {
	const char str[] = "ab.casa.ab";
  	char *ret;

   	ret = ft_strchr(str, 'b');

   	printf("%s\n", ret);
   
   	return(0);
}
