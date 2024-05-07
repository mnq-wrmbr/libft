/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:55:50 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/18 20:32:49 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	unsigned char	*tmp_ptr;
	size_t			i;

	total_size = count * size;
	tmp_ptr = malloc(total_size);
	i = 0;
	if (tmp_ptr == NULL)
		return (NULL);
	while (i < total_size)
	{
		tmp_ptr[i] = 0;
		i++;
	}
	return (tmp_ptr);
}
