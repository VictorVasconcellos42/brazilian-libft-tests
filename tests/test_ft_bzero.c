/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:52:30 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/06/22 23:59:26 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define RESET "\e[0m"

void	test_ft_bzero(void)

{
	char	*string;
	char	**array;
	char	**array2;
	char	*string2;
	int		buffer;
	size_t	len;
	size_t	len_max;

	len = 0;
	buffer = -1;
	string = "Victor,Marcio,Natasha,Godoy,Tohru";
	string2 = "Victor,Marcio,Natasha,Godoy,Tohru";
	array = ft_split(string, ',');
	array2 = ft_split(string2, ',');
	puts("-------------------------------\n");
	puts("------------FT_BZERO-----------\n");
	puts("-------------------------------\n");
	while (array[++buffer])
	{
		while(len < strlen(array[buffer]))
		{
			printf("before: %c | %d\t", array2[buffer][len], array2[buffer][len]);
			len++;
		}
		puts("\n");
		len_max = strlen(array[buffer]);
		ft_bzero(array[buffer], (size_t) buffer);	
		bzero(array2[buffer], (size_t) buffer);
		len = 0;
		while (len < len_max)
		{
			printf("after: %c | %d\t", array2[buffer][len], array2[buffer][len]);
			len++;
		}
		puts("\n");
		len = 0;
	}
}
