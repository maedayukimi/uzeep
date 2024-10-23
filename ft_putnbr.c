/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <maedayukimi@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:13:27 by mawako            #+#    #+#             */
/*   Updated: 2024/09/25 19:15:24 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_putnbr(int n, int *len)
{
	char	*s;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len += 10;
		return ;
	}
	s = ft_itoa(n);
	*len += ft_strlen(s) - 1;
	ft_putstr_fd(s, 1);
	free(s);
}
