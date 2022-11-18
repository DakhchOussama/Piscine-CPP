/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:37 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:40:41 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a;
	Point b(10, 0);
	Point c(0, 10);
	const Point point(1, 1);

	std:: cout << "coordinates a { " << a.get_X() << " , " \
	 << a.get_Y() << "}" << std:: endl;
	std:: cout << "coordinates b { " << b.get_X() << " , " \
	<< b.get_Y() << "}" << std:: endl;
	std:: cout << "coordinates c { " << c.get_X() << " , " \
	 << c.get_Y() << "}" << std:: endl;
	std:: cout << "coordinates a { " << point.get_X() << " , " \
	 << point.get_Y() << "}" << std:: endl;
	if (bsp(a, b, c, point) == true)
		std:: cout << "\t\033[32mTRUE\033[0m" << std:: endl;
	else
		std:: cout << "\t\033[31mFALSE\033[0m" << std:: endl;
	std:: cout << "-----Another Test-----------" << std:: endl;
	Point _a;
	Point _b(4, 1);
	Point _c(2, 4);
	const Point _point(5, 4);

	std:: cout << "coordinates a { " << _a.get_X() << " , " \
	 << _a.get_Y() << "}" << std:: endl;
	std:: cout << "coordinates b { " << _b.get_X() << " , " \
	<< _b.get_Y() << "}" << std:: endl;
	std:: cout << "coordinates c { " << _c.get_X() << " , " \
	 << _c.get_Y() << "}" << std:: endl;
	std:: cout << "coordinates a { " << _point.get_X() << " , " \
	 << _point.get_Y() << "}" << std:: endl;
	if (bsp(_a, _b, _c, _point) == true)
		std:: cout << "\t\033[32mTRUE\033[0m" << std:: endl;
	else
		std:: cout << "\t\033[31mFALSE\033[0m" << std:: endl;

}
