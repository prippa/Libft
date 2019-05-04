/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_str_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prippa <prippa@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:35:38 by prippa            #+#    #+#             */
/*   Updated: 2019/02/11 12:35:40 by prippa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_def.h"

int32_t		ft_is_str_empty(const char *str)
{
	if (!ft_strcmp(str, EMPTY_STR))
		return (1);
	return (0);
}
