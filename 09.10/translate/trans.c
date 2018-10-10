/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 21:02:27 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/09 21:52:44 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1,&c, 1);
}

int		putnbr(nb)
{
	if (nb > 9)
		putnbr(nb/10);
	putchar(nb%10 + '0');
	return(nb);
}


int		main()
{
	int i;

	i = 0;

	putnbr(123);
	char str[50];
	putchar((char)64);
	putchar('\n');
	write(1, "\n", 1);
	while (i < 50)
	{
		str[i] = (i);
		putchar(str[i]);
		i++;
	}
	return (0);
}
