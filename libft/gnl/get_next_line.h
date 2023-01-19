/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:02:36 by hgill             #+#    #+#             */
/*   Updated: 2022/07/04 18:52:14 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

size_t		ft_strlen(char *str);
char		*ft_strchr(char*s, int c);
char		*ft_strjoin(char *s1, char *s2);
char		*get_next_line(int fd);
char		*ft_line(char *s);
char		*ft_save(char *s);
char		*ft_read_save(int fd, char *s);

#endif
