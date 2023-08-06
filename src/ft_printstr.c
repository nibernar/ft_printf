/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasbernard <nicolasbernard@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:32:49 by nicolasbern       #+#    #+#             */
/*   Updated: 2023/08/06 01:14:19 by nicolasbern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Outputs the string 's' to the file descriptor STDOUT and return the total length of 's'.
 * 
 * @param s The string 's' to output.
 * @return Total length of the number 's'.
 */
int	ft_printstr(char *s)
{
	if (!s)
    {
        ft_putstr_fd(STR_NULL, STDOUT_FILENO);    
		return ((int)ft_strlen(STR_NULL));
    }
    ft_putstr_fd(s, STDOUT_FILENO);    
    return ((int)ft_strlen(s));
}

