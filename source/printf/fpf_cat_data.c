/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpf_cat_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prippa <prippa@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:12:28 by prippa            #+#    #+#             */
/*   Updated: 2018/08/25 14:12:29 by prippa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_str.h"
#include <unistd.h>

void	fpf_cat_char_len(t_printf *fpf, int32_t n, char c)
{
	if (n < 1)
		return ;
	while (n--)
		fpf_cat_char(fpf, c);
}

void	fpf_cat_char(t_printf *fpf, char c)
{
	if ((fpf->buflen + 1) > FPF_BUF_SIZE)
	{
		fpf->len += write(fpf->fd, fpf->buf, fpf->buflen);
		fpf->buflen = 0;
	}
	fpf->buf[fpf->buflen] = c;
	++fpf->buflen;
}

void	fpf_cat_str_len(t_printf *fpf, const char *src, int32_t n)
{
	if (n > FPF_BUF_SIZE)
	{
		fpf->len += write(fpf->fd, fpf->buf, fpf->buflen);
		fpf->len += write(fpf->fd, src, n);
		fpf->buflen = 0;
		return ;
	}
	else if ((fpf->buflen + n) > FPF_BUF_SIZE)
	{
		fpf->len += write(fpf->fd, fpf->buf, fpf->buflen);
		fpf->buflen = 0;
	}
	ft_strncpy(&fpf->buf[fpf->buflen], src, n);
	fpf->buflen += n;
}

void	fpf_cat_str(t_printf *fpf, const char *src)
{
	int32_t srclen;

	srclen = ft_strlen(src);
	if (srclen > FPF_BUF_SIZE)
	{
		fpf->len += write(fpf->fd, fpf->buf, fpf->buflen);
		fpf->len += write(fpf->fd, src, srclen);
		fpf->buflen = 0;
		return ;
	}
	else if ((fpf->buflen + srclen) > FPF_BUF_SIZE)
	{
		fpf->len += write(fpf->fd, fpf->buf, fpf->buflen);
		fpf->buflen = 0;
	}
	ft_strcpy(&fpf->buf[fpf->buflen], src);
	fpf->buflen += srclen;
}
