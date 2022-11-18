/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:33:05 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:33:06 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat()
{
    std:: cout << "Default Cat Created" << std:: endl;
    this->type = "Cat";
}

Cat:: ~Cat()
{
    std:: cout << "Destroy Cat" << std:: endl;
}

Cat:: Cat(const Cat &cat)
{
    this->type = cat.type;
    std:: cout << "Copy Cat " << this->type << std:: endl;
}

void Cat:: makeSound(void) const
{
    std:: cout << "Cat sound : Meow" << std:: endl;
}

Cat &Cat:: operator = (const Cat &cat)
{
    std:: cout << "Assignement operator created" << std:: endl;
    this->type = cat.type;
    return (*this);
}
