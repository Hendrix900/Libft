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

char    *ft_strjoin(char const *s1, char const *s2);

int main() 
{
   char const *s1= "Hola";
   char const *s2= "Mundo";
   char *result;
   result = ft_strjoin(s1, s2);
   printf("The string : %s\n", result);
   return 0;
}