/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:02:08 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/14 17:02:08 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
int	conversion;
int negative;

conversion = 0;
negative = 1;

while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
if (*str == '-')
	negative = -1;
if (*str == '-' || *str == '+')
	str++;
while(*str && *str >= '0' || *str <= '9')
{
	conversion = conversion *10 + (*str -48);
	str++;
}	
return (conversion * negative);	
}
