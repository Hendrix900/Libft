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

int ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
   char str1[15] = "AAbB";
   char str2[15] = "AABb";
   int ret;

   ret = ft_memcmp(str1, str2, 3);

   if(ret > 0) 
   {
      printf("str2 es menor que str1\n");
   } else if(ret < 0) 
   {
      printf("str1 es menor que str2\n");
   } else 
   {
      printf("str1 es igual a str2\n");
   }
   
   return(0);
}