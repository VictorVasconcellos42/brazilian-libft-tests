/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:04:29 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/06/23 01:46:11 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

void	ft_test_ft_substr(void)

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
