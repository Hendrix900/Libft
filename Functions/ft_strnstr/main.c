/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:48:35 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 17:17:50 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char *ft_strnstr(const char	*s1, const char *s2, size_t n);

int main (void) 
{
   const char *s1 = "www.casa.es";
   const char *s2 = "casa";
   char *ret;

   ret = ft_strnstr(s1, s2, 1);

   printf("%s\n", ret);
}
