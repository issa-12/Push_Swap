/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalayan <isalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 11:39:22 by isalayan          #+#    #+#             */
/*   Updated: 2024/07/27 13:39:53 by isalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*p;
	char		*q;
	size_t		i;

	p = src;
	q = dest;
	i = 0;
	while (i < n)
	{
		q[i] = p[i];
		i++;
	}
	return (dest);
}
