/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybulacak <ybulacak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:24:32 by ybulacak          #+#    #+#             */
/*   Updated: 2022/08/02 17:29:08 by ybulacak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 9
# endif

int		ft_find_new_line(char *all_first_left_last);
size_t	ft_strlen(char *all_first_left_last);
char	*ft_strjoin(char *buff, char *all_first_left_last);
char	*ft_with_new_line(int fd, char *all_first_left_last);
char	*ft_until_new_line(char *all_first_left_last);
char	*ft_left(char *all_first_left_last);
char	*get_next_line(int fd);

#endif
