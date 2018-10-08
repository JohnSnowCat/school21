/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:50:09 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/08 16:32:38 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		ft_putnbr(char *str)
{
	int nb = 0;
	int k = 0;

	while (str[k] >= '0' && str[k] <= '9')
	{
		nb = nb *10;
		nb = nb +str[k] -'0';
		k++;
	}
		return (nb);
}

int		ft_min(int a, int b, int c)
{
	if ((a <= b) && (a <= c))
		return (a);
	else if ((b <= a) && (b <= c))
		return (b);
	else
	   	return (c);
}

int		main(int a, int b, int c)
{
	int a, b, c;
	int d;

	if (argc == 2)
		a = ft_putnbr(argv[1]);
	else if (argc == 3)
		b = ft_putnbr(argv[2]);
	else if (argc == 4)
		c = ft_putnbr( argv[3]);

	d = ft_min(a, b, c);
	printf("%d", d);
	return (0);
}

