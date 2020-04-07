/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 06:41:56 by carlos            #+#    #+#             */
/*   Updated: 2020/01/25 07:20:36 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putstr_fd(char *s, int fd);

int main()
{

char c[] = "hola que ase";

ft_putstr_fd(c, 1);

return (0);
}