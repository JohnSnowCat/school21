/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:14:37 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/07 20:49:21 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(nb)
{
	if (nb > 9 )
		putnbr(nb/10);
	putchar(nb%10 + '0');

}

void	swap(int *a, int *b)
{
	int e = 777;
	e = *a;
	*a = *b;
	*b = e;
	write(1, "This is *a:\n", 12);
	putnbr(*a);
	write(1, "\nThis is *b:\n", 13);;
	putnbr(*b);;
}

int		main()
{
	int *a, *b;
	int c, d;

	c = 91;
	d = 77;
	a = &c;
	b = &d;
	swap(a,b);
	return (0);
}
