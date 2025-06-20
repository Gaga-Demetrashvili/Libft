/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdemetra <gdemetra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:11:17 by gdemetra          #+#    #+#             */
/*   Updated: 2025/06/12 19:11:17 by gdemetra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_writecharn(char c, size_t n)
// {
// 	while (n > 0)
// 	{
// 		write(1, &c, 1);
// 		n--;
// 	}
// 	write(1, "\n", 1);
// }

// void	ft_printtestres(char *funcname, char *ft_res, char *res)
// {
// 	static size_t	test_num = 1;
// 	char			*test;
// 	char			*emoji;

// 	test = "Test";
// 	if (test_num == 1)
// 	{
// 		printf("%s %ss\n", funcname, test);
// 		fflush(stdout);
// 		ft_writecharn('-', 15);
// 	}
// 	printf("%s %zu\t", test, test_num++);
// 	// printf("Gaga Demetrashvili\n");
// 	// I use fflush(stdout) (stdout refers to terminal),
// 	// because printf saves text to print in buffer,
// 	// then before program ends C runtime flushes,
// 	// which means shows output to terminal. That's why without
// 	// using fflush, first write method's output will be shown,
// 	//	because it writes directly to the file descriptor
// 	// (stdout for example - which stands for terminal) via the kernel,
// 	// immediately.It is said that if you put
// 	// "\n" (new line) in the end of the string of printf,
// 	// it should automatically flush output like fflush(stdout),
// 	// but probably it doesn't always work like that so fflush(stdout)
//  // is go to method for that problem.
// 	printf("ft_%s: %p | %s: %p\t", funcname, ft_res, funcname, res);
// 	emoji = (ft_res == res) ? "✅" : "❌";
// 	printf("%s\n", emoji);
// }

// void	ft_print_result(char **arr)
// {
// 	size_t	i;

// 	i = 0;
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }

int	ft_strchr_for_split(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	if ((char)c == '\0')
		return (i);
	return (-1);
}

size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 1;
	word_count = 0;
	if (s[0] && s[0] != c)
		word_count++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			word_count++;
		i++;
	}
	return (word_count);
}

void	ft_clear_memory(char **strarr)
{
	size_t	i;

	i = 0;
	while (strarr[i])
	{
		free(strarr[i]);
		i++;
	}
}

void	ft_initialize_arr(char **strarr, const char *src, char c,
		size_t word_count)
{
	size_t	start_p;
	int		len;
	size_t	i;

	start_p = 0;
	i = 0;
	while (i < word_count)
	{
		while (src[start_p] == c)
			start_p++;
		len = ft_strchr_for_split(src + start_p, c);
		if (len < 0)
			len = ft_strlen(src + start_p);
		strarr[i] = ft_substr(src, start_p, len);
		if (!strarr[i])
		{
			ft_clear_memory(strarr);
			break ;
		}
		start_p += len;
		i++;
	}
	strarr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr_of_strings;
	size_t	str_len;
	size_t	word_count;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (str_len == 0)
		word_count = 0;
	else
		word_count = ft_countwords(s, c);
	arr_of_strings = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr_of_strings)
		return (NULL);
	ft_initialize_arr(arr_of_strings, s, c, word_count);
	return (arr_of_strings);
}

// int	main(void)
// {
// 	char		**splitted_string;
// 	const char	*str_to_split;
// 	char		split_on;

// 	// str_to_split = "   lorem   ipsum dolor     sit amet,
// 	// 				consectetur adipiscing elit.Sed non risus.Suspendisse ";
// 	split_on = ' ';
// 	splitted_string = ft_split("   lorem   ipsum dolor     sit amet,"
// 			" consectetur adipiscing elit.Sed non risus.Suspendisse ",
// 								split_on);
// 	ft_print_result(splitted_string);
// 	free(splitted_string);
// 	return (0);
// }

// int	main(void)
// {
// // Test for ft_split
// char **splitted_string;
// const char *str_to_split = "Gaga Temo leqso beqa";
// char split_on = ' ';
// char *ft_substr_res;

// splitted_string = ft_split(str_to_split, split_on);

// Test for ft_countwords
// char *str_to_test_for_count = "  a   a  a ";
// printf("%zu\n", ft_countwords(str_to_test_for_count, ' '));

// Test for ft_substr
// const char *str_to_substr = "Gaga Temo leqso beqa";

// printf("%s", ft_substr_res = ft_substr(str_to_split, 18, 4));
// free(ft_substr_res);

// Testing utility methods for ft_split
// char *funcname = "strchr";
// char *test_str = NULL;
// char test_chr = 0;
// char *ft_res = NULL;
// char *res = NULL;

// test_str = "Gaga";
// size_t i = 0;
// char *test_chr_arr = "g\0d";

// while(i < 3)
// {
//      ft_printtestres(funcname, ft_strchr_og(test_str, test_chr_arr[i]),
//      i++;
// }
// return (0);
// }