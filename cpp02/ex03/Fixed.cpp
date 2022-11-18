/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:05 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:40:06 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: exponent = 1 << Fixed:: frational_bits;

Fixed:: Fixed()
{
    this->value = 0;
}

Fixed:: Fixed(const int int_number): value(int_number * exponent)
{

}

Fixed:: Fixed(const float float_number)
{
    this->value = roundf(float_number * exponent);
}

Fixed:: Fixed(const Fixed &fixed_point): value(fixed_point.value)
{
}

Fixed:: ~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &fixed_point)
{
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

float Fixed:: operator+(Fixed fixed_point) const
{
    return (this->toFloat() + fixed_point.toFloat());
}

float Fixed:: operator-(Fixed fixed_point) const
{
    return (this->toFloat() - fixed_point.toFloat());
}

float Fixed:: operator*(Fixed fixed_point) const
{
    return (this->toFloat() * fixed_point.toFloat());
}

float Fixed:: operator/(Fixed fixed_point) const
{
    return (this->toFloat() / fixed_point.toFloat());
}

bool Fixed:: operator == (Fixed fixed_point) const
{
    return (this->toFloat() == fixed_point.toFloat());
}

bool Fixed:: operator <= (Fixed fixed_point) const
{
    return (this->toFloat() <= fixed_point.toFloat());
}

bool Fixed:: operator >= (Fixed fixed_point) const
{
    return (this->toFloat() >= fixed_point.toFloat());
}

bool Fixed:: operator < (Fixed fixed_point) const
{
    return (this->toFloat() < fixed_point.toFloat());
}

bool Fixed:: operator > (Fixed fixed_point) const
{
    return (this->toFloat() > fixed_point.toFloat());
}

bool Fixed:: operator != (Fixed fixed_point) const
{
    return (this->toFloat() != fixed_point.toFloat());
}

const Fixed &Fixed:: min(Fixed const &fixed_point, Fixed const &second)
{
    if (fixed_point.toFloat() >= second.toFloat())
        return (second);
    else
        return (fixed_point);
}

const Fixed &Fixed:: max(Fixed const &fixed_point, Fixed const &second)
{
    if (fixed_point.toFloat() >= second.toFloat())
        return (fixed_point);
    else
        return (second);
}

Fixed &Fixed:: min(Fixed &fixed_point, Fixed&second)
{
    if (fixed_point.toFloat() <= second.toFloat())
        return (fixed_point);
    else
        return (second);
}

Fixed &Fixed:: max(Fixed &fixed_point, Fixed&second)
{
    if (fixed_point.toFloat() >= second.toFloat())
        return (fixed_point);
    else
        return (second);
}

Fixed Fixed:: operator++(void)
{
    this->value++;
    return(*this);
}

Fixed Fixed:: operator--(void)
{
    this->value--;
    return(*this);
}

Fixed Fixed:: operator++(int)
{
    Fixed tmp = *this;

    ++this->value;
    return (tmp);
}

Fixed Fixed:: operator--(int)
{
    Fixed tmp = *this;

    --this->value;
    return (tmp);
}

std::ostream& operator << (std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}
