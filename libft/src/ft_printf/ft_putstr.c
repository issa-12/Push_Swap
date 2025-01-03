/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalayan <isalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:13:07 by isalayan          #+#    #+#             */
/*   Updated: 2024/07/27 13:44:07 by isalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_putstr(char const *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}
