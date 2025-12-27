#include "push_swap.h"

int main(int ac, char **av)
{
    int i;
    char **arr;
    t_list *head;

    if (ac < 2)
        return (0);
    arr = ft_split(av[1], "         \v\f\r\n");
    i = 0;
    head = NULL;
    while (arr[i])
        ft_lstadd_back(&head, ft_lstnew(ft_atoi(arr[i++])));
}

void rr(t_list *stack_a, t_list *stack_b)
{
    rotate(stack_a, 'n');
    rotate(stack_b, 'n');
    write(1, "rr\n", 3);
}

void bubble_sort(t_list *head)
{
    t_list *curr;
    t_list *tmp;
    int numb;

    curr = head;
    while (curr->next)
    {
        tmp = head;
        while (tmp->next)
        {
            if (tmp->num > tmp->next->num)
            {
                numb = tmp->num;
                tmp->num = tmp->next->num;
                tmp->next->num = numb;
            }
            tmp = tmp->next;
        }
        curr = curr->next;
    }
}