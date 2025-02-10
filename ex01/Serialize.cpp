/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:54:52 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/20 11:26:08 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Serialize.hpp"

Serialize::Serialize() {}

Serialize::~Serialize() {}

Serialize::Serialize(const Serialize& other)
{
	(void)other;
}

Serialize& Serialize::operator=(const Serialize& other)
{
	(void)other;
	return *this;
}

uintptr_t Serialize::serialize(Data* ptr)
{
	return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data*	Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
