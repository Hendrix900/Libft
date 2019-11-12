/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:18:50 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/12 17:26:49 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memcpy(void *restricted dst, const void *restrict src, size_t n)
{
	unsigned char *q;
	int l;

	q = (unsigned char*)str;
	l = 0;
	while (n > 0)
	{
		q[l] = c;
		l++;
		n--;
	}
	return (str);
}
