/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:25 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:40:26 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
   const Fixed x;
   const Fixed y;
public:
    Point(const float &_x, const float &_y);
    Point(const Point &copy);
    Point();
    ~Point();
    Point & operator = (const Point &fixed_point);
    const Fixed &get_X(void) const;
    const Fixed &get_Y(void) const;
};

std::ostream & operator << (std::ostream &out, const Point &point);
float test(const Point a, const Point b, const Point c);
bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif
