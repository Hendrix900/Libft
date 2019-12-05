/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:02:08 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 15:51:27 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función atoi transforma el valor "numérico" pasado como char en un int */

int	ft_atoi(const char *str)
{
	int	conversion;
	int negative;
	int l;

	l = 0;
	conversion = 0;
	negative = 1;
	while (str[l] != '\0')
	{
		if (str[l] == ' ' || str[l] == '\n' || str[l] == '\t' ||
			str[l] == '\v' || str[l] == '\f' || str[l] == '\r')
			l++;
		else
			break ;
	}
	if (str[l] == '-') //Si se da esta condición
		negative = -1; //Transformamos negative en -1 para que el resultado final sea negativo
	if (str[l] == '-' || str[l] == '+')
		l++;
	while (str[l] >= '0' && str[l] <= '9')
	{
		conversion = conversion * 10 + (str[l] - 48); //Transforma el char en int
		l++;
	}
	return (conversion * negative);
}
