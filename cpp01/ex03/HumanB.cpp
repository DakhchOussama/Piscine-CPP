/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:39:50 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:39:52 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB:: HumanB(std:: string str): weaponB(nullptr), name(str)
{
    std:: cout << str << " created with no Weapon " << std:: endl;
}

HumanB:: ~HumanB(void)
{
    std:: cout << "HumanB " << this->name << " destroy";
}

void HumanB:: attack(void)
{
    if (this->weaponB == nullptr)
    {
        std:: cout << "No Weapon" << std:: endl;
        exit (1);
    }
    else 
        std:: cout << this->name << " " << "attacks with their " << \
         this->weaponB->getType() << std:: endl;
}

void HumanB:: setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;
}
