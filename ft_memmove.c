/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmontero <mmontero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:46:28 by mmontero          #+#    #+#             */
/*   Updated: 2024/10/17 08:48:35 by mmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	p_str1 = (unsigned char *)dest;
	p_str2 = (unsigned const char *)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		p_str1[n] = p_str2[n];
	return (dest);
}
