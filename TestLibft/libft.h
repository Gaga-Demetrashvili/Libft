/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdemetra <gdemetra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:01:14 by gdemetra          #+#    #+#             */
/*   Updated: 2025/06/07 14:06:31 by gdemetra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

// char	*strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	if (!*needle)
// 		return ((char *)haystack);
// 	i = 0;
// 	while (haystack[i] && i < len)
// 	{
// 		j = 0;
// 		while (haystack[i + j] == needle[j] && (i + j) < len)
// 		{
// 			if (!needle[j + 1])
// 				return ((char *)&haystack[i]);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

// size_t	strlcat(char *dst, const char *src, size_t siz)
// {
// 	char		*d;
// 	const char	*s = src;
// 	size_t		n;
// 	size_t		dlen;

// 	d = dst;
// 	n = siz;
// 	while (n-- != 0 && *d != '\0')
// 		d++;
// 	dlen = d - dst;
// 	n = siz - dlen;
// 	if (n == 0)
// 		return (dlen + strlen(s));
// 	while (*s != '\0')
// 	{
// 		if (n != 1)
// 		{
// 			*d++ = *s;
// 			n--;
// 		}
// 		s++;
// 	}
// 	*d = '\0';
// 	return (dlen + (s - src));
// }

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int value, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

#endif