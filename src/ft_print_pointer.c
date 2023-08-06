/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasbernard <nicolasbernard@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:41:20 by nibernar          #+#    #+#             */
/*   Updated: 2023/08/06 01:48:08 by nicolasbern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Outputs the pointer of the variable 'n' to the file descriptor STDOUT and return the total length of 'nb'.
 * 
 * @param nb The pointer of the variable 'n'.
 * @param base The hexadecimal 'base'.
 * @return Total length of the pointer 'n'.
 */
int	ft_print_pointer(unsigned long n, char *base)
{
	int	len;

	len = 1;
	if (n >= 16)
		len += ft_print_pointer(n / 16, base);
	ft_putchar_fd(base[n % 16], STDOUT_FILENO);
	return (len);
}
