/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmontero <mmontero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:28:10 by mmontero          #+#    #+#             */
/*   Updated: 2024/10/17 09:02:49 by mmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	in;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		in = 0;
		end = ft_strlen(s1);
		while (s1[in] && ft_strchr(set, s1[in]))
			in++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > in)
			end--;
		str = (char *)malloc(sizeof(char) * (end - in + 1));
		if (str)
			ft_strlcpy(str, &s1[in], end - in + 1);
	}
	return (str);
}
