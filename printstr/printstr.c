/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:37:51 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/06 19:08:31 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 
int     main()
{
	char str[] = "Hello Putin!";
	int i = 0;
	int j;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	j=i-1;

	write(1, "\n", 1);
	while (j >=0)
	{
		write(1, &str[j], 1);
		j--;
	}
	write(1, "\n", 1);
		return (0);
}
