/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasbernard <nicolasbernard@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:49:04 by nibernar          #+#    #+#             */
/*   Updated: 2023/08/06 01:14:13 by nicolasbern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Outputs the number 'n' and return the total length of 'n'.
 * 
 * @param n The number 'n' to output.
 * @return Total length of the number 'n'.
 */
int	ft_printnbr(int n)
{
	if (n >= 0)
		return (ft_print_unsigned_int(n));
	ft_putchar_fd('-', STDOUT_FILENO);
	return (1 + ft_print_unsigned_int(-n));
}
