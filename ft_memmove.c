/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:49:37 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/17 16:22:51 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		count;

	count = 0;
	if ((char *)dst == NULL && (const char *)src == NULL)
		return (dst);
	if ((char *)dst > (const char *)src)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((const char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (count < n)
		{
			((char *)dst)[count] = ((const char *)src)[count];
			count++;
		}
	}
	return (dst);
}
