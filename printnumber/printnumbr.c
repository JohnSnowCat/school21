/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:20:23 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/07 19:09:59 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i=0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= (-1);
	}
	if (nb > 9)
		ft_putnbr(nb/10);
	ft_putchar(nb%10+ '0');
}

long int	ft_char_to_nbr(char *argv)
{
	long int i,nb, neg;

	i = 0;
	nb = 0;
	neg = 0;
	if (argv[i] == '-')
		neg = 1;
	while (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		nb = nb*10;
		nb = nb + argv[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}

int		main(int argc, char **argv)
{
	char str[] = "Error";

	if (argc == 2)
	{
		long int nb;
		nb = ft_char_to_nbr(argv[1]);
		ft_putnbr(nb);
	}
	else
		ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
