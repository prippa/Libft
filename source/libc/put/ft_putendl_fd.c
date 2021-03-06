/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prippa <prippa@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:56:09 by prippa            #+#    #+#             */
/*   Updated: 2017/11/06 15:56:11 by prippa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"
#include "ft_str.h"
#include "ft_def.h"

void	ft_putendl_fd(char const *s, int32_t fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	ft_putchar_fd(ENDL, fd);
}
