/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:08:18 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/25 10:28:12 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*curr;

	if (!lst || !(*lst))
		return ;
	while (*lst)
	{
		curr = *lst;
		*lst = (*lst)->next;
		free(curr);
	}
	*lst = NULL;
}
