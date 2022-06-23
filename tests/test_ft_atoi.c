/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 08:26:52 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/06/23 00:02:04 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define RESET "\e[0m"

void test_ft_atoi(void)

{
	char	*numbers;
	char	**array;
	int		buffer;

	buffer = -1;
	numbers = "523 -567 923 -120 345 999 123 312 984 0 -1 29489220497";
	array = ft_split(numbers, ' ');
	puts("-------------------------------\n");
	puts("------------FT_ATOI------------\n");
	puts("-------------------------------\n");
	while (array[++buffer])
	{
		if (ft_atoi(array[buffer]) == atoi(array[buffer]))
			printf(GRN "OK!!\n");
		else
			printf(RED "KO!!\n");
		printf(RESET "String: [%s]\nFt_atoi: %d\nAtoi: %d\n\n", array[buffer], ft_atoi(array[buffer]), atoi(array[buffer]));
	}
}
