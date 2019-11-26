/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 13:23:26 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/26 13:23:26 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	temp = *alst;

	if (!temp)
		*alst = new;
	else
	{
		while (temp->next)
			temp = temp->next;
			temp->next = new;
	}
}
