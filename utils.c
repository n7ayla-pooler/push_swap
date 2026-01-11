/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:18:11 by abdnahal          #+#    #+#             */
/*   Updated: 2026/01/11 15:54:58 by abdnahal         ###   ########.fr       */
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

int get_pos_range(t_list *stack, int min, int max)
{
    int pos;

    pos = 0;
    while (stack)
    {
        if(stack->index >= min && stack->index <= max)
            return (pos);
        pos++;
        stack = stack->next;
    }
    return (-1);
}

int get_pos(t_list *stack, int index)
{
    int pos;

    pos = 0;
    while (stack)
    {
        if (stack->index == index)
            return (pos);
        stack = stack->next;
        pos++;
    }
    return (-1);
}