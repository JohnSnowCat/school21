/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:25:06 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/10 22:29:05 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	rpalf(char *str)
{
	int i,j;
	int num[26];
	while (i < 26)
	{
		num[i] = i;
		i++;
	}

	i = 0;
	while (i < num[i])
	{
		ftputchar(str[i] - 'a');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	rpalf(argv[1]);
	return (0);
}
