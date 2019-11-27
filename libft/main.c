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

#include <string.h>
#include <stdio.h>
#include <ctype.h>

char	**ft_split(char const *s, char c);

int main() 
{
   char const *s = "Holaquetal";
   char **result = ft_split(s, 'q');
   printf("%s\n", result);
   return 0;
}
