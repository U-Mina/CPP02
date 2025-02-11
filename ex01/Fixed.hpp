/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:57:52 by ewu               #+#    #+#             */
/*   Updated: 2025/02/11 13:40:53 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int x;
	static const int y = 8;
public:
	Fixed();
	Fixed(const int z);//converts to corresponding fixed-point val
	Fixed(const float alpha);//to corresponding fixed-point val
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	
	float toFloat(void) const;//fixed-point to float-pont, by /2^8
	int toInt(void) const;//fixed-point to int, shift right 8 bits(rm fraction part)
	
	int getRawBits(void) const;
	void setRawBits(int const raw);	
};


#endif