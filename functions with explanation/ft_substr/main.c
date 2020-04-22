/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:07:06 by ccastill          #+#    #+#             */
/*   Updated: 2020/04/22 01:21:31 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);

int main() 
{
   char const *s= "Hola Mundo";
   char *result;
   int a;
   
   result = ft_substr(s, 3, 10);
   a = ft_strlen(s);
   printf("The string : %s\n", result);
   printf("La longitud de la cadena es : %d\n", a);

   return 0;
}
