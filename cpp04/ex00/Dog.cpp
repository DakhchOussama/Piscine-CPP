/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:33:20 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:33:21 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog()
{
    std:: cout << "Default Dog Created" << std:: endl;
    this->type = "Dog";
}

Dog:: ~Dog()
{
    std:: cout << "Destroy Dog" << std:: endl;
}

Dog:: Dog(const Dog &dog)
{
    this->type = dog.type;
    std:: cout << "Copy Dog " << this->type << std:: endl;
}

void Dog:: makeSound(void) const
{
    std:: cout << "Dog sound : Haw Haw" << std:: endl;
}

Dog &Dog:: operator = (const Dog &dog)
{
    std:: cout << "Assignement operator created" << std:: endl;
    this->type = dog.type;
    return (*this);
}
