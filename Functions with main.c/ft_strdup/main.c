/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:52:54 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/18 16:34:36 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<string.h>

char	*ft_strdup(char *src);

int main() 
{
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s\n", result);
   return 0;
}