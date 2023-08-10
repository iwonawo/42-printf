/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:32:51 by iwozniak          #+#    #+#             */
/*   Updated: 2023/08/10 10:33:19 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long long int n);
size_t	ft_base_nbrlen(long long int n, size_t base);
size_t	ft_u_base_nbrlen(unsigned long long int n, size_t base);
int		ft_u_base_putnbr(unsigned long long int n, const char *base);
int		ft_u_puthexa(unsigned long long int n, char format);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);

#endif
