/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:04:53 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/17 22:43:55 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int i, size_t n)
{
	char	*char_s;
	size_t	count;

	char_s = s;
	count = 0;
	while (count < n)
	{
		*char_s = i;
		char_s++;
		count++;
	}
	return (s);
}
