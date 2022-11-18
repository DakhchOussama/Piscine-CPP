/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:33:36 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:33:39 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal()
{
    this->type = "WrongAnimal";
    std:: cout << "Default WrongAnimal Created" << std:: endl;
}

WrongAnimal:: ~WrongAnimal()
{
    std:: cout << "Destroy WrongAnimal" << std:: endl;
}

WrongAnimal:: WrongAnimal(const WrongAnimal &wrong_animal)
{
    this->type = wrong_animal.type;
    std:: cout << "Copy WrongAnimal " << this->type << std:: endl;
}

std:: string WrongAnimal:: get_type(void) const
{
    return (this->type);
}

void WrongAnimal:: makeSound(void) const
{
    std:: cout << "WrongAnimal sound" << std:: endl;
}

WrongAnimal &WrongAnimal:: operator = (const WrongAnimal &wring_animal)
{
    std:: cout << "Assignement operator created" << std:: endl;
    this->type = wring_animal.type;
    return (*this);
}
