/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:48:05 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/12 13:45:51 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *str, int c, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
void 	*ft_memccpy(void *dest, const void *src, int c, size_t n)
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
void 	*ft_memchr(const void *s, int c, size_t n)
size_t	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, unsigned int n);
int		ft_tolower(int c);
int		ft_toupper(int c);
#endif




