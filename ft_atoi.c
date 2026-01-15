/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 06:53:32 by abdnahal          #+#    #+#             */
/*   Updated: 2026/01/15 16:09:37 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *nptr)
{
	long i, (sign), (nbr);
	i = 0;
	sign = 1;
	nbr = 0;
	while (nptr[i])
	{
		if (nptr[i] == '-' || nptr[i] == '+')
		{
			if (nptr[i] == '-')
				sign *= -1;
			i++;
		}
		while (nptr[i] >= '0' && nptr[i] <= '9')
			nbr = nbr * 10 + nptr[i++] - '0';
		if (!(nptr[i] >= '0' && nptr[i] <= '9'))
        {
            write(2, "ERROR", 5);
            exit(1);
        }
		break ;
	}
	return (nbr * sign);
}