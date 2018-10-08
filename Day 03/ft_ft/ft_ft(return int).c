/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:06:06 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/08 15:06:31 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int		putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb/10);
	putchar(nb%10 +'0');
	return (0);
}

int		ft_ft(int *b)
{
	*b = 42;
	return (*b);
	//	putnbr(c);
}

int		main()
{
	int a = 0;
	int *b;

	b = &a;
	a = ft_ft(b);
	putnbr(a);
	return (0);
}




