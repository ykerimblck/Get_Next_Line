/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybulacak <ybulacak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:24:12 by ybulacak          #+#    #+#             */
/*   Updated: 2022/07/30 14:24:16 by ybulacak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_find_new_line(char *all_first_left_last)
{
	int	i;

	i = 0;
	if (all_first_left_last == NULL)
		return (0);
	while (all_first_left_last[i] != '\0')
	{
		if (all_first_left_last[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(char *all_first_left_last)
{
	size_t	i;

	i = 0;
	if (all_first_left_last == NULL)
		return (0);
	while (all_first_left_last[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *first_part, char *to_be_added)
{
	char	*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(char) * (ft_strlen(first_part)
				+ ft_strlen(to_be_added) + 1));
	if (!arr)
		return (NULL);
	while (first_part && first_part[i])
	{
		arr[i] = first_part[i];
		i++;
	}
	while (to_be_added && *to_be_added)
		arr[i++] = *to_be_added++;
	arr[i] = 0;
	free(first_part);
	return (arr);
}
