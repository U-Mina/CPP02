/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:37:38 by ewu               #+#    #+#             */
/*   Updated: 2025/02/09 13:22:53 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * TASK:
 * Orthodox Canonical Form
 * 	• Default constructor
	• Copy constructor
	• Copy assignment operator • Destructor
 */

int main()
{
	Fixed byDefault_1;//fixed_a obj using defaut constructor
	Fixed byCopyCons(byDefault_1);//call cpy cons
	Fixed byDefault_2;//new OBJ with default cons
	byDefault_2=byCopyCons;//assign state of copy_a OBJ to OBJ 'b'
	
	std::cout << byDefault_1.getRawBits() << std::endl;
	std::cout << byCopyCons.getRawBits() << std::endl;
	std::cout << byDefault_2.getRawBits() << std::endl;
	return 0;
}
