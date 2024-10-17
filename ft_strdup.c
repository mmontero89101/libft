/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmontero <mmontero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:45:50 by mmontero          #+#    #+#             */
/*   Updated: 2024/10/17 08:59:53 by mmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		t;

	t = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (t + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, t);
	ptr[t] = '\0';
	return (ptr);
}
