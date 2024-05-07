/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:47:15 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/16 12:35:54 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totallen;
	char	*new_s;
	size_t	i;
	size_t	j;

	totallen = ft_strlen(s1) + ft_strlen(s2);
	new_s = malloc(totallen + 1);
	i = 0;
	j = 0;
	if (!new_s)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new_s[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		new_s[i] = s2[j];
		i++;
		j++;
	}
	new_s[i] = '\0';
	return (new_s);
}
