/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:35:00 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:35:42 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
private:
    int value;
    static const int exponent;
    static const int frational_bits = 8;
public:
    Fixed();
    Fixed(const int int_number);
    Fixed(const float float_number);
    Fixed(const Fixed &Fixed_point);
    ~Fixed();
    float toFloat(void) const;
    int toInt(void) const;
    Fixed & operator = (const Fixed &fixed_point);
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif
