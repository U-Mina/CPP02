/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:55:50 by ewu               #+#    #+#             */
/*   Updated: 2025/02/09 13:27:35 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : x(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* create a new Fixed OBJ by copying the state */
/* x(other.x): member init list, init 'x' var of 
CURRENT OBJ with the value of 'x' of OTHER OBJ*/
Fixed::Fixed(const Fixed& other) : x(other.x)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
//'this'=='other' means CURRENT obj is same with OTHER obj
	if (this == &other)
		return *this;
/*current obj is not assigned to itself, then we assign 'x' of CUR obj
to 'x' of OTHER obj (by calling getter)
*/
	else
		x = other.getRawBits();
	return *this;//return REF to THIS obj
}

/** SUM:
 * copy constructor: create a new Fixed object by 
 * 			copying the state of an existing Fixed object, 
 * copy assignment operator: to assign the state of one Fixed object
 * 			to another existing Fixed object.
 */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return x;
}

void Fixed::setRawBits(int const raw)
{
	x = raw;
	//std::cout << "setRawBits member function called" <<std::endl;
}
