/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 06:41:56 by carlos            #+#    #+#             */
/*   Updated: 2020/01/25 07:23:32 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putchar_fd(char c, int fd);

int main()
{

char c = 'l';

ft_putchar_fd(c, 1);
ft_putchar_fd('\n', 1);

return (0);
}