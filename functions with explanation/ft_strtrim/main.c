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

char *ft_strtrim(char const *s1, char const *set);

int main() 
{
   char const *s1= "baHolaba";
   char const *set= "b";
   char *result;
   result = ft_strtrim(s1, set);
   printf("The string : %s\n", result);
   return 0;
}