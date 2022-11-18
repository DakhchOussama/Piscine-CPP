/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:13 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:40:14 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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
    static Fixed& min(Fixed &fixed_point, Fixed&second);
    static const Fixed& min(Fixed const &fixed_point, Fixed const &second);
    static Fixed& max(Fixed &fixed_point, Fixed&second);
    static const Fixed& max(Fixed const &fixed_point, Fixed const &second);
    bool operator > (Fixed fixed_point) const;
    bool operator < (Fixed fixed_point) const;
    bool operator >= (Fixed fixed_point) const;
    bool operator <= (Fixed fixed_point) const;
    bool operator == (Fixed fixed_point) const;
    bool operator != (Fixed fixed_point) const;
    float operator / (Fixed fixed_point) const;
    float operator + (Fixed fixed_point) const;
    float operator - (Fixed fixed_point) const;
    float operator * (Fixed fixed_point) const;
    Fixed & operator = (const Fixed &fixed_point);

    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif
