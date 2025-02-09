/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:38:59 by ewu               #+#    #+#             */
/*   Updated: 2025/02/09 12:40:54 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int x;//store fixed-point number value
	static const int y;//store number of fractional bits
public:
	Fixed();
//create copy of constructor: myClass(const myClass& other)
//take a const REF of constructor using '&'
	Fixed(const Fixed& other);
//assign val of one Fixed OBJ to another Fixed OBJ
	Fixed& operator=(const Fixed& other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);	
};


#endif

/**
 * NOTE: copy assignment operator
 * 	- non-static member func of a class with name: 'operator='
 * 	- allows assignment of the value of ONE OBJ to another OBJ of SAME CLASS
 * SYNTAX:
 * struct X {
 * 	X& operator=(X& other); //copy assigment operator
 * 	X operator=(X other); //pass by value
 * }
 */