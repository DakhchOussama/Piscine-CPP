/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:33:56 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:33:57 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat:: WrongCat()
{
    this->type = "WrongCat";
    std:: cout << "Default WrongCat Created" << std:: endl;
}

WrongCat:: ~WrongCat()
{
    std:: cout << "Destroy WrongCat" << std:: endl;
}

WrongCat:: WrongCat(const WrongCat &wrong_animal)
{
    this->type = wrong_animal.type;
    std:: cout << "Copy WrongCat " << this->type << std:: endl;
}

std:: string WrongCat:: get_type(void) const
{
    return (this->type);
}

void WrongCat:: makeSound(void) const
{
    std:: cout << "WrongCat sound" << std:: endl;
}

WrongCat &WrongCat:: operator = (const WrongCat &wring_cat)
{
    std:: cout << "Assignement operator created" << std:: endl;
    this->type = wring_cat.type;
    return (*this);
}
