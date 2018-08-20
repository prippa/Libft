/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prippa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:49:28 by prippa            #+#    #+#             */
/*   Updated: 2017/10/31 12:49:32 by prippa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *tmp;

	tmp = s1;
	while (*tmp)
		++tmp;
	while (n)
	{
		if (!(*tmp = *s2++))
			break ;
		++tmp;
		--n;
	}
	*tmp = 0;
	return (s1);
}
