/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:04:11 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:04:12 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data point;
    uintptr_t ptr;
    Data *_point;

    point.number = -5;

    std:: cout << "address of Data object : " << point.number << std:: endl;
    ptr = serialize(&point);
    std:: cout << "Data object after serialize : " << ptr << std:: endl;
    _point = deserialize(ptr);
    std:: cout << "Data object after deserialize : " << _point->number << std:: endl;

    return (0);
}
