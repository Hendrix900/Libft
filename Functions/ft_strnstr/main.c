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

#include <string.h>
#include <stdio.h>


//char *ft_strnstr(const char	*s1, const char *s2, size_t n);

int main () 
{
   const char *s1 = "hola";
   const char *s2 = "hola";
   char *ret;

   ret = strnstr(s1, s2, 1);

   printf("%s\n", ret);
   
   return(0);
}
