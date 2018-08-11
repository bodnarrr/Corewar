/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igaliuk <igaliuk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 16:06:00 by igaliuk           #+#    #+#             */
/*   Updated: 2017/12/27 16:17:09 by igaliuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_printpct(char **str, unsigned char c)
{
	if (!(*str = ft_strnew(1)))
		return (-1);
	(*str)[0] = c;
	return (0);
}
