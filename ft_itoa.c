/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:41:12 by mwarmbie          #+#    #+#             */
/*   Updated: 2023/12/18 11:09:04 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cal_len(int n, int count)
{
	if (n < -9 || n > 9)
	{
		count++;
		return (cal_len(n / 10, count));
	}
	else if (n >= -9 && n <= 9)
		count++;
	if (n < 0)
		count++;
	return (count);
}

char	*get_str(char *res, int n, int len, bool neg)
{
	char	n_to_str;

	n_to_str = n % 10 + '0';
	if (len > 0)
	{
		len--;
		get_str(res, n / 10, len, neg);
		res[len] = n_to_str;
	}
	if (n <= 9)
	{
		if (neg)
		{
			res[0] = '-';
			res[1] = n_to_str;
		}
		else
			res[0] = n_to_str;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	bool	neg;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = cal_len(n, 0);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	neg = false;
	if (n < 0)
	{
		n = -n;
		neg = true;
	}
	res = get_str(res, n, len, neg); 
	return (res);
}
