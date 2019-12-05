/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:07:06 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/20 21:07:06 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len);

int main() 
{
   char const *s= "Hola Mundo";
   char *result;
   result = ft_substr(s, 3, 8);
   printf("The string : %s\n", result);
   return 0;
}
