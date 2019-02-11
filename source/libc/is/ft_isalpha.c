/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prippa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:31:01 by prippa            #+#    #+#             */
/*   Updated: 2017/10/31 18:31:04 by prippa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

int32_t	ft_isalpha(int32_t c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
