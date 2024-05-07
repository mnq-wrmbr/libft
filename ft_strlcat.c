/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:43:42 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/18 20:15:12 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;
	size_t	totallen;

	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (n <= dstlen)
		totallen = n + srclen;
	else
		totallen = dstlen + srclen;
	if (n <= 0)
		return (totallen);
	i = dstlen; 
	while (src[j] && (i < (n - 1)))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (totallen);
}
