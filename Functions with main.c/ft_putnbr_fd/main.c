/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 06:41:56 by carlos            #+#    #+#             */
/*   Updated: 2020/01/25 07:27:12 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

int main()
{

int c = 85476;

ft_putnbr_fd(c, 1);
ft_putchar_fd('\n', 1);

return (0);
}