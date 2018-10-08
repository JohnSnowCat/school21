/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:50:09 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/08 15:58:45 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		ft_min(int a, int b, int c)
{
	if ((a < b) && (a < c))
		return (a);
	else if ((b < a) && (b < c))
		return (b);
	else return (c);
}

int		main()
{
	int c;

	c = ft_min(9, 11, 52);
	printf("%d", c);
	return (0);
}


