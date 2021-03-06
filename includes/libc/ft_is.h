/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prippa <prippa@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:21:46 by prippa            #+#    #+#             */
/*   Updated: 2019/02/11 12:21:47 by prippa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

# include <stdint.h>

int32_t		ft_isalpha(int32_t c);
int32_t		ft_isdigit(int32_t c);
int32_t		ft_isalnum(int32_t c);
int32_t		ft_isascii(int32_t c);
int32_t		ft_isprint(int32_t c);
int32_t		ft_isalpha_in_case(int32_t c);
int32_t		ft_isalnum_in_case(int32_t c);
int32_t		ft_isspace(int32_t c);
int32_t		ft_isupper(int32_t c);
int32_t		ft_islower(int32_t c);
int32_t		ft_is_str_digit(const char *str);
int32_t		ft_is_str_alpha(const char *str);
int32_t		ft_is_str_upper(const char *str);
int32_t		ft_is_str_lower(const char *str);
int32_t		ft_is_str_space(const char *str);
int32_t		ft_is_str_empty(const char *str);
int32_t		ft_is_str_print(const char *str);

#endif
