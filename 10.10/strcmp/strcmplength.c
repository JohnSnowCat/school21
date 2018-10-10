/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:33:05 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/10 18:18:13 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
		write(1, &c, 1);
	}

int		ft_putnbr(nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (-nb);
	}

	if (nb > 9)
		ft_putnbr(nb/10);
	ft_putchar(nb % 10 +'0');
	return(nb);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (j > i)
		return (1);
	if (j < i)
		return (-1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int nb;

	nb = 0;
	if (argc <3)
	write(1,"Error\n", 6);
	nb = ft_strcmp(argv[1],argv[2]);
	ft_putnbr(nb);
	return (0);
}
