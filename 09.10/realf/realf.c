/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:23:49 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/09 19:39:14 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main()
{
	char a,b;

	a = 'Z';
	b = 'y';

	while ((a >= 'A') && (b >= 'a'))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a = a - 2;
		b = b - 2;
	}
	return (0);
}
