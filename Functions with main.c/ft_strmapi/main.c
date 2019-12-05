/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 22:01:20 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/20 22:01:20 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *f(unsigned int, char)

int main() 
{
   char const *s= "Hola";
   char *f= "Mundo";
   char *result;
   result = ft_strmapi(*s, *f);
   printf("The string : %s\n", result);
   return 0;
}