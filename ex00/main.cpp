/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:43:58 by aibn-che          #+#    #+#             */
/*   Updated: 2024/11/15 11:15:44 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"

int main(int argc, char **argv)
{

	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
	}
	return (0);
}
