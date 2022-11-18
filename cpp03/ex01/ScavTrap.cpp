/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:11:57 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/17 10:11:58 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap:: ScavTrap(void)
{
    std:: cout << "ScavTrap " << this->name << "has created" << std:: endl;
}

ScavTrap:: ScavTrap(std:: string name): ClapTrap(name)
{
    this->Hitpoint = 100;
    this->Energypoint = 50;
    this->attackdamage = 20;
    std:: cout << "ScavTrap " << this->name << " has created" << std:: endl;
}

ScavTrap:: ~ScavTrap(void)
{
    std:: cout << "ScavTrap " << this->name << " destroy" << std:: endl;
}

ScavTrap:: ScavTrap(const ScavTrap &scar): ClapTrap(scar.getname())
{
    *this = scar;
    std:: cout << "copy ScavTrap " << this->name << " has created" << std:: endl;
}

ScavTrap &ScavTrap:: operator = (const ScavTrap &scar)
{
    std:: cout << "ScavTrap Copy Assignation operator called" << std:: endl;
    this->name = scar.getname();
    this->Hitpoint = scar.getHitpoint();
    this->Energypoint = scar.getEnergy();
    this->attackdamage = scar.getattackdamage();
    return (*this);
}

void ScavTrap:: attack(const std:: string &target)
{
     if (this->Hitpoint == 0)
    {
        std:: cout << "ScavTrap " << this->name << " has dead !" << std:: endl;
        return ;
    }
    if (this->Energypoint != 0)
    {
        this->Energypoint--;
        std:: cout << "ScavTrap " << this->name << " attacks " \
        << target << ", cousing points of damage!" << std:: endl;
    }
    else
        std:: cout << "no Energy" << std:: endl;
}

void ScavTrap:: guardate()
{
    std:: cout << this->name << " is now in Gate Keeper Mode" << std:: endl;
}
