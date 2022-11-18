/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:03:58 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:03:59 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std:: uintptr_t serialize(Data *pointer)
{
    uintptr_t ptr;

    ptr = reinterpret_cast<std:: uintptr_t>(pointer);
    return (ptr);
}

Data *deserialize(std:: uintptr_t raw)
{
    Data *point;

    point = reinterpret_cast<Data *>(raw);
    return (point);
}
