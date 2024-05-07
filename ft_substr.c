/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:16:31 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/18 20:20:26 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	strlen;

	strlen = ft_strlen(s);
	i = 0;
	if (start > strlen || len == 0)
		len = 0;
	else if (strlen - start < len)
		len = strlen - start;
	sub_s = malloc(len + 1);
	if (!sub_s)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		sub_s[i] = s[start];
		i++;
		start++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
