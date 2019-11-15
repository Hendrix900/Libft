/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:48:35 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 16:46:26 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "Hola");
   strcpy(str2, "ola");

   ret = ft_strncmp(str1, str2, 5);

   if(ret < 0) {
      printf("str1 es menor que str2\n");
   } else if(ret > 0) {
      printf("str2 es menor que str1\n");
   } else {
      printf("str1 es igual que str2\n");
   }
   
   return(0);
}