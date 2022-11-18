/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:38:49 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/05 16:39:12 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <iterator>

class ExceptionNoFound: public std:: exception
{
    public :
        const char *what() const throw()
        {
            return ("NoFound");
        }
};

template<typename T>
void easyfind(T container, int num)
{
    typename T:: iterator it1 = container.begin();
    typename T:: iterator it2 = container.end();

    typename T:: iterator it3 = find (it1, it2, num);
    if (it3 == it2)
        throw ExceptionNoFound();
    std:: cout << *it3 << std:: endl;
}
#endif