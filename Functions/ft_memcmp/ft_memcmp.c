/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:24:12 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/13 18:24:12 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *q;
	unsigned char *p;
	int l;

	q = (unsigned char*)s1;
	p = (unsigned char*)s2;
	l = 0;

	if (n == 0)
		return (0);

	



}