/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:37:40 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:37:41 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog:: Dog()
{
    std:: cout << "Default Dog Created" << std:: endl;
    this->type = "Dog";
    brain = new Brain();
}

Dog:: ~Dog()
{
    std:: cout << "Destroy Dog" << std:: endl;
    delete brain;
}

Dog:: Dog(const Dog &dog)
{
    this->type = dog.type;
    this->brain = new Brain();
    *(this->brain) = *(dog.brain);
    std:: cout << "Copy Dog " << this->type << std:: endl;
}

void Dog:: makeSound(void) const
{
    std:: cout << "Dog sound" << std:: endl;
}

Dog &Dog:: operator = (const Dog &dog)
{
    std:: cout << "Assignement operator created" << std:: endl;
    if(this != &dog)
    {
        this->type = dog.type;
        if(this->brain)
            delete this->brain;
        this->brain = new Brain();
        this->brain = dog.brain;
    }
    return (*this);
}
