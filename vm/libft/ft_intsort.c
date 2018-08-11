/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaliuk <igaliuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:10:54 by igaliuk           #+#    #+#             */
/*   Updated: 2018/01/13 17:19:34 by igaliuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_intsort(int **a, size_t l, int z)
{
	size_t	i;
	int		k;

	k = 1;
	while (k)
	{
		k = 0;
		i = 0;
		while ((z > 0) && (++i < l))
			if ((*a)[i - 1] > (*a)[i])
			{
				ft_swap(&((*a)[i - 1]), &((*a)[i]));
				k = 1;
			}
		while ((z < 0) && (++i < l))
			if ((*a)[i - 1] < (*a)[i])
			{
				ft_swap(&((*a)[i - 1]), &((*a)[i]));
				k = 1;
			}
	}
}
