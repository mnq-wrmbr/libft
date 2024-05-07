/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:52:58 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/18 20:28:08 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_size(const char *s, char c)
{
	int	num_words;
	int	i;

	num_words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		if (s[i] != c)
			num_words++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		while (s[i] != '\0' && s[i] == c)
			i++;
	}
	return (num_words);
}

static int	ft_free(char **str, int count)
{
	while (count > 0)
	{
		count--;
		free(str[count]);
	}
	free (str);
	return (-1);
}

static int	fill_word(const char *s, char c, char **res, int num_words)
{
	int	count;
	int	len;
	int	i;
	int	start;

	count = 0;
	i = 0;
	while (count < num_words)
	{
		len = 0;
		if (s[i] == c)
			while (s[i] != '\0' && s[i] == c)
				i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			len++;
		}
		res[count] = ft_substr(&s[start], 0, len);
		if (!res[count])
			return (ft_free(res, count));
		count++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		num_words;
	int		count;

	num_words = ft_find_size(s, c);
	res = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!res)
		return (NULL);
	count = fill_word(s, c, res, num_words);
	if (count == -1)
		return (NULL);
	res[count] = NULL;
	return (res);
}
