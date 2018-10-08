/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 12:15:58 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/08 13:40:47 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

int		putnbr(nb)
{
	if (nb > 9)
		putnbr(nb/10);
	putchar(nb%10 + '0');
	return (nb);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

int		main(int argc, char **argv)
{
	int nb = 0;
	if (argc == 2)
	{	
		nb = ft_strlen(argv[1]);
		putnbr(nb);
		write(1, "\n", 1);
	}
	else
	{
		nb = ft_strlen(argv[0]);
		putnbr(nb);
		write(1, "\n", 1);
	}
return (0);
}
