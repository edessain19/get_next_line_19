/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edessain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 09:37:25 by edessain          #+#    #+#             */
/*   Updated: 2020/03/10 11:55:21 by edessain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

#define BUFFER_SIZE 50

size_t	ft_strlen(const char *s);
char	*ft_strndup(const char *str, const char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
int		ft_read(int fd, char **line, char *rest);
int		get_next_line(int fd, char **line);
int		ft_free(char **string, int nb);

#endif
