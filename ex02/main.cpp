/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:14:25 by aibn-che          #+#    #+#             */
/*   Updated: 2024/11/16 11:06:45 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Base.hpp"

int main()
{
	srand(time(0));

	Base *b = generate();
	Base *c = generate();
	Base *e = generate();
	Base *d = generate();

	identify(*b);
	identify(b);
	cout << "\n";

	identify(*c);
	identify(c);
	cout << "\n";

	identify(*e);
	identify(e);
	cout << "\n";

	identify(*d);
	identify(d);

	delete b;
	delete c;
	delete e;
	delete d;
	return (0);
}