/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:25:43 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/10 16:57:34 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

int		putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb/10);
	putchar(nb%10 +'0');
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


char *ft_strdup(char *str)
{
	int len, i;
	char *arr;
	
	i = 0;
	len = ft_strlen(str);

	if ((arr = ((char*)malloc(sizeof(char) * (len+1)))) == NULL)
		return (NULL);
		while (i < len)
		{
			arr [i]= str[i];
			i++;
		}
		arr[i] = '\0';
	return (arr);
}

int		main(int argc, char **argv)
{
	int nb;
	char *strcop;

	if (argc == 2)
	{
		nb = ft_strlen(argv[1]);
		strcop = ft_strdup(argv[1]);
		putnbr(nb);
		putchar('\n');
		putstr(strcop);
		putchar('\n');
	}
	else
		putstr(argv[0]);
	return (0);
}
