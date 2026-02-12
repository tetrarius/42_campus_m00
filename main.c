/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:12:51 by aravakia          #+#    #+#             */
/*   Updated: 2026/02/11 11:52:13 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> // Для оригинальной strchr
#include "libft.h"

int main(void)
{
	char	*str1;
	char	str2;
	char	**res;
	int	i;
	
	i = 0;
	str1 = "*23**11Hello*** World!1**11*";
	str2 = '*';
	res = ft_split(str1, str2);
	if (!res)
		return (1);
	while (res[i] != NULL)
	{	
		printf("World %d: |%s|\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
