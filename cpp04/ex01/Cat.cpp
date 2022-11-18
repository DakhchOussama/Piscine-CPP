/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:34:54 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:34:55 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat()
{
    std:: cout << "Default Cat Created" << std:: endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat:: ~Cat()
{
    std:: cout << "Destroy Cat" << std:: endl;
    delete this->brain;
}

Cat:: Cat(const Cat &cat)
{
    this->type = cat.type;
    this->brain = new Brain();
    *(this->brain) = *(cat.brain);
    std:: cout << "Copy Cat " << this->type << std:: endl;
}

void Cat:: makeSound(void) const
{
    std:: cout << "Cat sound" << std:: endl;
}

Cat &Cat:: operator = (const Cat &cat)
{
    std:: cout << "Assignement operator created" << std:: endl;
    if(this != &cat)
    {
        this->type = cat.type;
        if(this->brain)
            delete this->brain;
        this->brain = new Brain();
        this->brain = cat.brain;
    }
    return (*this);
}
