/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realftern.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:39:41 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/09 20:01:08 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	int i;

	i = 123;

	while (i-- > 97)
		(i % 2 == 0) ? ft_putchar(i) : ft_putchar(i-32);
	return (0);
}


