/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:39:05 by aibn-che          #+#    #+#             */
/*   Updated: 2024/11/16 09:57:15 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>

using std::cout;
using std::endl;
class Data;

class	Serialize
{
	private:
		Serialize(void);
		~Serialize(void);
		Serialize (const Serialize &s);
		Serialize &operator=(const Serialize &s);
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
