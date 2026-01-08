/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:17:57 by abdnahal          #+#    #+#             */
/*   Updated: 2026/01/08 16:02:29 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int max_index(t_list *stack)
{
    int max;

    max = 0;
    while (stack)
    {
        if (stack->index >= max)
            max = stack->index;
        stack = stack->next;
    }
    return (max);
}

void sort_5(t_list **stack_a, t_list **stack_b)
{
    if (is_sorted(*stack_a))
        return ;
    push(stack_a, stack_b, 'b');
    push(stack_a, stack_b, 'b');
    sort_3(stack_a);
    push(stack_a, stack_b, 'a');
    sort_3(stack_a);
    push(stack_a, stack_b, 'a');
}

void indexing(t_list *stack)
{
    t_list *curr;
    t_list *head;
    
    head = stack;
    while (stack)
    {
        stack->index = 0;
        curr = head;
        while (curr)
        {
            if (stack->num > curr->num)
                stack->index += 1;
            curr = curr->next;
        }
        stack = stack->next;
    }
}

void    sort_push_a(t_list **stack_a, t_list **stack_b, int min, int max)
{
    t_list *curr;

    while (ft_lstsize(*stack_a) > 1)
    {
        curr = *stack_a;
        if (curr->index >= min && curr->index <= max)
        {
            if (curr->index < max - min / 2)
            {
               
                push(stack_a, stack_b, 'b');
                if (ft_lstsize(*stack_b) > 1)
                    rotate(stack_b, 'b');
            }
            else
                push(stack_a, stack_b, 'b');
            min++;
            max++;
        }
        rotate(stack_a, 'a');
    }
}

void sort_push_b(t_list **stack_a, t_list **stack_b)
{
    int max;
    
    while (*stack_b)
    {
        max = max_index(*stack_b);
        while ((*stack_b)->index != max)
        {
            
            if (ft_lstsize(*stack_b) - ft_lstsize(locate_index(*stack_b, max)) > (ft_lstsize(*stack_b) / 2))
                reverse_rotate(stack_b, 'b');
            rotate(stack_b, 'b');
        }
        push(stack_a, stack_b, 'a');
    }
}

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