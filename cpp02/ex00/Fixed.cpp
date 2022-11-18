/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:32:42 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:32:47 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed:: Fixed()
{
    std:: cout << "Default constractor called" << std:: endl;
    this->fixed_point = 0;
}

Fixed:: Fixed(const Fixed &point)
{
    std:: cout << "Copy constructor called" << std:: endl;
    this->fixed_point = point.getRawBits();
}

Fixed:: ~Fixed()
{
    std:: cout << "Destructor called" << std:: endl;
}

int Fixed:: getRawBits(void) const
{
    std:: cout << "getRawBits member function called" << std:: endl;
    return (this->fixed_point);
}

void Fixed:: setRawBits(int const raw)
{
    std:: cout << "setRawBits member function called" << std:: endl;
    this->fixed_point = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed_point)
{
    std:: cout << "Copy assignment operator called" << std:: endl;
    if (this != &fixed_point)
        this->fixed_point = fixed_point.getRawBits();
    return (*this);
}
