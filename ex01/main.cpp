/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:28:56 by aibn-che          #+#    #+#             */
/*   Updated: 2024/11/16 10:33:02 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Serialize.hpp"
#include "./Data.hpp"

int	main()
{
	Data data(10,11);

	uintptr_t p = Serialize::serialize(&data);

	Data *dt = Serialize::deserialize(p);

	if (&data == dt)
	{
		cout << "Success!" << endl;
	}

	return (0);
}
