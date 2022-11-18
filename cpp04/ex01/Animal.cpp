/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:34:32 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:34:33 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal(void)
{
    this->type = "Animal";
    std:: cout << "Default Animal Cretead" << std:: endl;
}

Animal:: ~Animal(void)
{
    std:: cout << "Destroy Animal" << std:: endl;
}

Animal:: Animal(const Animal &animal)
{
    this->type = animal.type;
    std:: cout << "Copy Constrator Created" << std:: endl;
}

std:: string Animal:: get_type(void) const
{
    return (this->type);
}

Animal &Animal:: operator = (const Animal &animal)
{
    std:: cout << "Assignement operator created" << std:: endl;
    this->type = animal.type;
    return (*this);
}

void Animal:: makeSound(void) const
{
    std:: cout << "Animal sound" << std:: endl;
}
