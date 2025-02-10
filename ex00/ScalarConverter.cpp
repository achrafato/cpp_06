/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:32:49 by aibn-che          #+#    #+#             */
/*   Updated: 2024/11/15 17:48:04 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	(void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return *this;
}

void ScalarConverter::convert(const std::string& literal)
{
	char *end;
	double number;

	if (literal.length() == 1 && !isdigit(literal[0]))
	{
		char c = literal[0];
		cout << "char: '" << static_cast<char>(c) <<"'"<<  endl;
		cout << "int: " << static_cast<int>(c) <<  endl;
		cout << "float: " << static_cast<float>(c) << "f" <<  endl;
		cout << "double: " << static_cast<double>(c) <<  endl;
	}
	else
	{
		number = std::strtod(literal.c_str(), &end);
		if (!(*end) || (*end == 'f' && !(*(end + 1))))
		{
			if (literal == "nan" || literal == "nanf")
			{
				cout << "char: impossible" << endl;
				cout << "int: impossible" << endl;
				cout << "float: nanf" << endl;
				cout << "double: nan" << endl;
			}
			else if (literal == "-inf" || literal == "+inf"
						|| literal == "-inff" || literal == "+inff")
			{
				cout << "char: impossible" << endl;
				cout << "int: impossible" << endl;
				cout << "float: " << literal[0] << "inff" << endl;
				cout << "double: " << literal[0] << "inf" << endl;
			}
			else
			{
				if (number > CHAR_MAX || number < CHAR_MIN)
					std::cout << "char: impossible" << std::endl;
				else
				{
					if (!(number >= 32 && number <= 127))
						std::cout << "char: Non displayable" << std::endl;
					else
						std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
				}
				if (number > INT_MAX || number < INT_MIN)
					std::cout << "int: impossible" << std::endl;
				else
					std::cout << "int: " << static_cast<int>(number) << std::endl;
				std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(number) << std::endl;
			}
		}
		else
		{
			cout << "char: impossible" << endl;
			cout << "int: impossible" << endl;
			cout << "float: impossible" << endl;
			cout << "double: impossible" << endl;
		}
	}
}
