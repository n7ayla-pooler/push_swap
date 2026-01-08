/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:18:11 by abdnahal          #+#    #+#             */
/*   Updated: 2026/01/08 17:29:27 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *locate_index(t_list *head, int index)
{
    while (head)
    {
        if(head->index == index)
            return(head);
        head = head->next;        
    }
    return (NULL);
}

int    is_in(t_list *stack, int min, int max)
{
    while (stack)
    {
        if (stack->index >= min && stack->index <= max)
            return (1);
        stack = stack->next;
    }
    return (0);
}