/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:36:45 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/08 14:40:56 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strin.h>

void ft_bzero(void *s, size_t n)
{
unsigned char *q;
	q = (unsigned char*)str;
	int l;

	l = 0;
	while (n > 0)
	{	
		q[l] = c;
		l++;
		n--;
	}
	return (str);
}