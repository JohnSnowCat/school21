/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prtnumb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:59:47 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/10 21:07:20 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		prtnbr(nb)
{
	if (nb > 9)
		prtnbr(nb/10);
	ft_putchar(nb % 10 +'0');
	return (nb);
}

int		main()
{
	int nb;

	nb = 1;
	while (nb <= 9)
	{
		prtnbr(nb);
		nb++;
	}
	return (0);
}
