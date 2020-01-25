/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:55:47 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 06:33:32 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* La función imprime el caracter mandado por el file descriptor que se le indique (1, 0, o el 2) */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
