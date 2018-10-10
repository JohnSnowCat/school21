/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_world.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:54:33 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/10 20:45:33 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
write(1, &c, 1);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int i, j;

		i = 0;
		while ((argv[1][i] != '\0') && ((argv[1][i] == ' ') ||
				(argv[1][i]) == '\t'))
			i++;
		j = i;
		while ((argv[1][j] != '\0') && (argv[1][j] >= 33) &&
				(argv[1][j]  <= 123))
				{
					ft_putchar(argv[1][j]);
					j++;
				}
	}
	ft_putchar('\n');
	return (0);
}
