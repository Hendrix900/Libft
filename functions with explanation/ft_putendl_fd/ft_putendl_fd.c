/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:18:41 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 07:14:51 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Imprime la cadena mandada con salto de linea por el file descriptor que se le indique */
void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	int l;

	l = 0;
	while (s[l])
	{
		ft_putchar_fd(s[l], fd);
		l++;
	}
	write(1, "\n", 1);
}