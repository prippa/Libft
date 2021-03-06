/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prippa <prippa@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 14:43:33 by prippa            #+#    #+#             */
/*   Updated: 2017/10/31 14:43:34 by prippa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

char	*ft_strchr(const char *s, int32_t c)
{
	char ch;

	ch = (char)c;
	while (*s)
		if (*s++ == ch)
			return ((char *)(s - 1));
	if (*s == ch)
		return ((char *)s);
	return (NULL);
}
