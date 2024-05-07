/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:27:34 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/17 16:18:03 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*new_dst;
	const char	*new_src;

	count = 0;
	new_dst = dst;
	new_src = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (count < n)
	{
		*new_dst = *new_src;
		new_dst++;
		new_src++;
		count++;
	}
	return (dst);
}
