/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:51:46 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 07:27:34 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);

/* Imprime en formato cadena el numero entero pasado por el file descriptor que se le indique */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	a = 0;
	if (n >= 0)
		a = n;
	if (n < 0)
	{
		a = n * -1;
		ft_putchar_fd('-', fd);
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
	}
	ft_putchar_fd((a % 10) + '0', fd);
}
