/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanseo <sanseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:27:06 by sanseo            #+#    #+#             */
/*   Updated: 2023/03/19 15:49:46 by sanseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*sc;
	size_t		i;

	dst = (char *)dest;
	sc = (const char *)src;
	if (dst < sc)
	{
		i = 0;
		while (i < n)
		{
			dst[i] = sc[i];
			i++;
		}
	}
	else if (dst > sc)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = sc[i];
		}
	}
	return (dest);
}
