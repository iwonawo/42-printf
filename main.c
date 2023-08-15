/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:02:27 by iwozniak          #+#    #+#             */
/*   Updated: 2023/08/15 14:59:20 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	main()
{
	char				c = 'A';
	char				*string = "Iwona";
	int					number = -42;
	int					octal_number = 077;
	int 				hex_value_X = 0x06ABCD;
	int 				hex_value_x = 0x06abcd;
	unsigned int 		unsigned_int = 456;
	char				**pointer = &string;
	long long int		llong_min = -9223372036854775807;
	int					int_min = -2147483648;
	int					int_max = 2147483647;
	unsigned long int	ulint = 4294967295;
	char				*empty = "";
	int					printed_len;

	ft_printf("hex: %x\n", 123);
	printf("hex: %x\n\n", 123);

	ft_printf("character: %c\nstring: %s\n", c, string);
	printf("character: %c\nstring: %s\n\n", c, string);

	ft_printf("number: %d\noctal: %i\nhex value: %i\nlong long min: %d\n", number, octal_number, hex_value_x, llong_min);
	printf("number: %d\noctal: %i\nhex value: %i\nlong long min: %lld\n\n", number, octal_number, hex_value_x, llong_min);

	ft_printf("hexadecimal X: %X\nhexadecimal x: %x\n", hex_value_X, hex_value_x);
	printf("hexadecimal X: %X\nhexadecimal x: %x\n\n", hex_value_X, hex_value_x);

	ft_printf("unsigned int: %u\n", unsigned_int);
	printf("unsigned int: %u\n\n", unsigned_int);

	ft_printf("unsigned long int: %u\n", ulint);
	printf("unsigned long int: %lu\n\n", ulint);

	ft_printf("percentage sign: %%\n");
	printf("percentage sign: %%\n\n");

	ft_printf("long long min: %d\n", llong_min);
	printf("long long min: %lld\n\n", llong_min);

	ft_printf("int min: %d\nint max: %d\n", int_min, int_max);
	printf("int min: %d\nint max: %d\n\n", int_min, int_max);

	ft_printf("null: %s\n", NULL);
	printf("null: %s\n", NULL);
	ft_printf("empty: %s\n", empty);
	printf("empty: %s\n\n", empty);

	ft_printf("pointer: %p\n", pointer);
	printf("pointer: %p\n", pointer);
	ft_printf("null pointer: %p\n", (void *)0);
	ft_printf("null pointer: %p\n", NULL);
	printf("null pointer: %p\n\n", NULL);

	printed_len = ft_printf("To count total printed length of %c and %s.\n", c, string);
	ft_printf("Total printed length: %d\n", printed_len);
	printf("Total printed length: %d\n\n", printed_len);

	int len = ft_putnbr(-123);
	ft_printf("\nft_putnbr len: %d\n", len);
	printf("ft_putnbr len: %d\n", len);
}
