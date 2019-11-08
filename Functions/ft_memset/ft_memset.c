/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:18:50 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/08 14:34:00 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *str, int c, size_t n)
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
