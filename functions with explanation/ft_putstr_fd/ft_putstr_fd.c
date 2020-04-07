/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:07:12 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/25 07:21:08 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);

/*imprime la cadena mandada por el file descriptor que se le indique*/

void	ft_putstr_fd(char *s, int fd)
{
	int l;

	l = 0;
	if (s != 0)
		while (s[l])
		{
			ft_putchar_fd(s[l], fd);
			l++;
		}
}

