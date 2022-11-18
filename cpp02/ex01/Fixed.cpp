/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:33:43 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:34:51 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: exponent = 1 << Fixed:: frational_bits;

Fixed:: Fixed()
{
    std:: cout << "Default constractor called" << std:: endl;
    this->value = 0;
}

Fixed:: Fixed(const int int_number): value(int_number * exponent)
{
    std:: cout << "Int constractor called" << std:: endl;
}

Fixed:: Fixed(const float float_number)
{
    this->value = roundf(float_number * exponent);
    std:: cout << "Float constractor called" << std:: endl;
}

Fixed:: Fixed(const Fixed &fixed_point): value(fixed_point.value)
{
    std:: cout << "copy constractor called" << std:: endl;
}

Fixed:: ~Fixed(void)
{
    std:: cout << "Destractor called" << std:: endl;
}

Fixed &Fixed::operator=(const Fixed &fixed_point)
{
    std:: cout << "Copy Assignation operator called" << std:: endl;
    this->value = fixed_point.value;
    return (*this);
}

int Fixed:: toInt(void) const
{
    return (this->value / exponent);
}

float Fixed:: toFloat(void) const
{
    return ((float)this->value / exponent);
}

std::ostream& operator << (std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}
