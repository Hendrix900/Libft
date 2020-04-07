/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:18:58 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 03:56:31 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	const char src[] = "www.origen.com";
	const char ch = 'r';
	char *ret;
	char *fun;
 
   ret = ft_memchr(src, ch, 20);
   fun = ft_memchr(src, ch, 20);

   printf("%s\n", ret);
   printf("%s\n", fun);


   return(0);
}
