/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:30:50 by tferreir          #+#    #+#             */
/*   Updated: 2022/05/27 12:06:39 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

/**
 * @brief computes the length of the string str up to, but not including
 * the terminating null character.
 *
 * @param str this is the string whose length is to be found.
 * @return size_t this function returns the length of string.
 */
size_t	ft_strlen(char *str);

/**
 * @brief searches for first occurrence of "c" in the string *str
 *
 * @param s the string
 * @param c character to be checked
 * @return char*, a pointer to the first occurrence of character c in *str or
 * NULL if the character is not found. The terminating null byte is considered
 * part of the string.
 */
char	*ft_strchr(char *s, int c);

/**
 * @brief Allocates (with malloc) and returns a new string, which is the result
 * of the concatenation of ’s1’ and ’s2’.
 *
 * @param s1 the prefix string.
 * @param s2 the suffix string.
 * @return char* the new string. NULL if the allocation fails
 */
char	*ft_strjoin(char *s1, char *s2);

/**
 * @brief Reads a file from a file descriptor
 *
 * @param fd file descriptor to read from
 * @return char* a line read from a file descriptor, if NULL: nothing else to
 * read or error
 */
char	*get_next_line(int fd);

char	*ft_get_line(char *save);
char	*ft_save(char *save);
char	*ft_read_and_save(int fd, char *save);

#endif
