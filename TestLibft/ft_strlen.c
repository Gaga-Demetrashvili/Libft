/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdemetra <gdemetra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:26:48 by gdemetra          #+#    #+#             */
/*   Updated: 2025/06/07 12:37:40 by gdemetra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// #include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// int	main(void)
// {
// 	printf("Result of isprint original - %zu\n", strlen("GagaDeme"));
// 	printf("Result of isprint mine - %zu\n", ft_strlen("GagaDeme"));

// 	return (0);
// }

// void	ft_string_manipulation(char *str)
// {
// 	str[1] = 'D';
// 	printf("Result of ft_string_manipulation - %s\n", str);
// }

// int	main(void)
// {
// 	char str[] = "GGeme";
// 	ft_string_manipulation(str);

// 	return (0);
// }