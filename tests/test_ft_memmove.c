/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:18:01 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/06/22 09:20:01 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define RESET "\e[0m"

void	test_ft_memmove(void)

{
	char	*name;
	char	*name2;
	char	**array;
	char	**array2;
	char	*result;
	char	*result2;
	int		buffer;

	buffer = -1;
	name = "Victor Moana Jorge Roberto Gabriel Claudio Pedro";
	name2 = "Victor Moana Jorge Roberto Gabriel Claudio Pedro";
	array = ft_split(name, ' ');
	array2 = ft_split(name2, ' ');
	puts("-------------------------------\n");
	puts("-----------FT_MEMMOVE----------\n");
	puts("-------------------------------\n");
	while (array[++buffer])
	{
		result = calloc(strlen(array[buffer]) + 1, 1);
		result2 = calloc(strlen(array2[buffer]) + 1, 1);
		ft_memmove(result, array[buffer], strlen(array[buffer]));
		memmove(result2, array2[buffer], strlen(array2[buffer]));
		if (strcmp(result, result2) == 0)
			printf(GRN "Teste[%i]: OK!!\n", buffer);
		else
			printf(RED "Teste[%i]: KO!!\n", buffer);
		printf(RESET "Origin: %s\t\t My:%s\n", result, result2);
		free(result);
		free(result2);
	}
}
