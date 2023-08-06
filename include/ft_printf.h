/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasbernard <nicolasbernard@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:57:04 by nicolasbern       #+#    #+#             */
/*   Updated: 2023/08/06 01:40:45 by nicolasbern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# define STR_NULL "(null)"
# define HEX_BASE_LOWER "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"

/********************
*	printf_function	*
********************/

int		ft_printf(const char *format, ...);
int		ft_printnbr(int n);
int		ft_printstr(char *s);
int		ft_print_unsigned_int(unsigned int nb);
int		ft_print_pointer(unsigned long n, char *base);
int		ft_printnbr_base(int n, char *base);

/********************
*	libft_function	*
********************/

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif
