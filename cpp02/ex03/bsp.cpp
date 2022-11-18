/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:31 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:40:32 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float test(const Point a, const Point b, const Point c)
{
    float area;

    area = ((a.get_X() * (b.get_Y() - c.get_Y())) + (b.get_X() \
     * (c.get_Y() - a.get_Y())) + (c.get_X() * (a.get_Y() - b.get_Y()))) / 2;

    if (area >= 0)
        return (area);
    else 
        return (area * -1);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    float test_triangle, test2, test3, test4;


    test_triangle = test(a, b, c);
    test2 = test(point, a, b);
    test3 = test(point, a , c);
    test4 = test(point, b , c);

    if (test2 == 0 || test3 == 0 || test4 == 0)
        return (false);
    if (test_triangle == test2 + test3 + test4)
        return (true);

    return (false);
}
