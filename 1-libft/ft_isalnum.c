/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanseo <sanseo@student.42seoul.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:11:16 by sanseo            #+#    #+#             */
/*   Updated: 2023/03/16 09:38:48 by sanseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else if (c <= 'Z' && c >= 'A')
		return (1);
	else if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
