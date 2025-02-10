/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:53:59 by aibn-che          #+#    #+#             */
/*   Updated: 2024/11/16 11:06:50 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void){}

void identify(Base* p)
{
	A* d1 = dynamic_cast<A *>(p);
	B* d2 = dynamic_cast<B *>(p);
	C* d3 = dynamic_cast<C *>(p);

	if (d1)
		cout << "[pointer] is type of class A"<< endl;
	else if (d2)
		cout << "[pointer] is type of class B"<< endl;
	else if (d3)
		cout << "[pointer] is type of class C"<< endl;
}

void	identify(Base &p)
{
	try
	{
		A& d1 = dynamic_cast<A &>(p);
		(void)d1;
		cout << "[reference] is type of class A"<< endl;
	}
	catch(std::exception& e){};
	try
	{
		B& d2 = dynamic_cast<B &>(p);
		(void)d2;
		cout << "[reference] is type of class B"<< endl;
	}
	catch(std::exception& e){};
	try
	{
		C& d3 = dynamic_cast<C &>(p);
		(void)d3;
		cout << "[reference] is type of class C"<< endl;
	}
	catch(std::exception& e){};
}

Base	*generate(void)
{
	int randomNum = rand() % 3;
	switch (randomNum)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}