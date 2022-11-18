/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:20 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:40:21 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point:: Point(): x(0), y(0)
{
}

Point:: Point(const float &_x, const float &_y): x(_x),y(_y) 
{
}

Point:: Point(const Point &copy): x(copy.get_X()), y(copy.get_Y())
{
}

Point:: ~Point(void)
{
}

Point &Point:: operator = (const Point &fixed_point)
{
    if (this == &fixed_point)
		return *this;
    
    return (*this);
}

const Fixed &Point:: get_X(void) const
{
    return (this->x);
}

const Fixed &Point:: get_Y(void) const
{
    return (this->y);
}

std::ostream & operator << (std::ostream &out, const Point &point)
{
    out << "x : " << point.get_X() << "y : " << point.get_Y() << std:: endl;
    return (out);
}
