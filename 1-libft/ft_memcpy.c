/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanseo <sanseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:28:58 by sanseo            #+#    #+#             */
/*   Updated: 2023/03/19 15:54:24 by sanseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*sc;
	size_t		i;

	dst = (char *)dest;
	sc = (const char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dest);
}
