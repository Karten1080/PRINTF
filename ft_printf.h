/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmati <asmati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:15:23 by asmati            #+#    #+#             */
/*   Updated: 2025/05/22 04:20:09 by asmati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>	
# include <stdio.h>
#include <stdint.h>
# include <stdlib.h>

// prinft.c
int	ft_formats(va_list args, const char format);
int	ft_printf(const char *str, ...);

//ft_print_unsigned
int	ft_print_unsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
int	ft_num_len(unsigned int num);

//ft_print_hex
int	ft_print_hex(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int	ft_hex_len(unsigned int num);

//Utilis;
int	ft_printchar(int c);
int	ft_printnbr(int n);
int	ft_putnbrpi(long nb);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_base16(void *ft_print_pointer);

//ft_print_ptr
int		ft_putstrp(char *str);
int		ft_print_ptr(unsigned long long ptr);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);

#endif