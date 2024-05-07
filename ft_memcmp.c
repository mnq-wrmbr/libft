/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:32:38 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/17 15:57:17 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*tmp_s1;
	const unsigned char	*tmp_s2;

	i = 0;
	tmp_s1 = (const unsigned char *)s1;
	tmp_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (tmp_s1[i] > tmp_s2[i])
			return (1);
		else if (tmp_s1[i] < tmp_s2[i])
			return (-1);
		i++;
	}
	return (0);
}
