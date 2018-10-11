/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 14:34:33 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/11 15:24:41 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char bitswap(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}



int		main(void)
{
	unsigned char c;
	char i;
	int b = 0;

	c = 'b';
	write(1, &c, 1);
	c = bitswap(c);
	write(1, &c, 1);
	write(1, &i, 9);
	return (0);
}

