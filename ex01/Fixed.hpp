/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:57:52 by ewu               #+#    #+#             */
/*   Updated: 2025/02/11 11:57:55 by ewu              ###   ########.fr       */
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