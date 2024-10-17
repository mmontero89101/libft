/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmontero <mmontero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:53:17 by mmontero          #+#    #+#             */
/*   Updated: 2024/10/17 08:55:17 by mmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			i;
	unsigned int	j;

	j = 0;
	i = 0;
	while ((str[i] != '\0') && (str2[i] != '\0') && (j == 0) && (i < c))
	{
		j = (unsigned char)str[i] - (unsigned char)str2[i];
		i++;
	}
	if ((j == 0) && (i < c))
		j = (unsigned char)str[i] - (unsigned char)str2[i];
	return (j);
}
