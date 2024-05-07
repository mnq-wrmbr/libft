/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwarmbie <mwarmbie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:12:57 by mwarmbie          #+#    #+#             */
/*   Updated: 2024/01/23 19:01:59 by mwarmbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	n_to_str;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	n_to_str = n % 10 + '0';
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &n_to_str, 1);
	}
	else if (n >= 0 && n <= 9)
		write(fd, &n_to_str, 1);
}
