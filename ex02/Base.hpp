/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:32:27 by aibn-che          #+#    #+#             */
/*   Updated: 2024/11/16 10:25:04 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <ctime> // IWYU pragma: keep
#include <iostream>

using std::cout;
using std::endl;

class Base
{
	public:
		virtual ~Base(void);
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
