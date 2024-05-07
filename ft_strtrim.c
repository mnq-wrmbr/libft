/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:24:19 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/18 11:30:03 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_first(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < ft_strlen(set))
	{
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static size_t	get_last(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (j < ft_strlen(set))
	{
		if (set[j] == s1[i])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	s1_only_made_of_set(char const *s1, char const *set)
{
	int			s1_made_of_set;
	int			set_contains;
	char const	*original_set;

	s1_made_of_set = 1;
	set_contains = 0;
	original_set = set;
	while (*s1)
	{
		while (*set)
		{
			if (*set == *s1)
				set_contains = 1;
			set++;
		}
		if (!set_contains)
			s1_made_of_set = 0;
		set_contains = 0;
		set = original_set;
		s1++;
	}
	return (s1_made_of_set);
}

char	*fill_s(size_t first, size_t last, char *new_s, char const *s1)
{
	size_t	i;
	size_t	j;

	i = first;
	j = 0;
	while (i >= first && i <= last)
	{
		new_s[j] = s1[i];
		j++;
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first_letter;
	size_t	last_letter;
	char	*new_s;

	if (*set == '\0')
		return (ft_strdup(s1));
	if (s1_only_made_of_set(s1, set))
	{
		new_s = malloc(1);
		if (!new_s)
			return (NULL);
		new_s[0] = 0;
		return (new_s);
	}
	first_letter = get_first(s1, set);
	last_letter = get_last(s1, set);
	new_s = malloc(last_letter - first_letter + 2);
	if (!new_s)
		return (NULL);
	new_s = (fill_s(first_letter, last_letter, new_s, s1));
	return (new_s);
}
