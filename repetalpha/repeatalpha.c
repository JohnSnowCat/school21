/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:25:06 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/11 16:32:02 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

char	rpalf(char *str)
{
	int  i,j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			j = str[i] - 'A';
			while (j >= 0)
			{
				ftputchar(str[i]);
				j--;
			}
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			j = str[i] - 'a';
			while (j >= 0)
			{
				ftputchar(str[i]);
				j--;
			}
		}
		else
			ftputchar(str[i]);
		i++;
	}
return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	rpalf(argv[1]);
	return (0);
}
