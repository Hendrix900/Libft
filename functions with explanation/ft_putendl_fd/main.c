/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 06:41:56 by carlos            #+#    #+#             */
/*   Updated: 2020/01/25 07:15:06 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putendl_fd(char *s, int fd);

int main()
{

char c[] = "hola que ase";

ft_putendl_fd(c, 1);

return (0);
}