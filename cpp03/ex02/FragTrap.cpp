/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:12:43 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/17 10:12:44 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap:: FragTrap(void)
{
    std:: cout << "Default FragTrap has created" << std:: endl;
}

FragTrap:: FragTrap(std:: string name):ClapTrap(name)
{
    this->name = name;
    this->Hitpoint = 100;
    this->Energypoint = 100;
    this->attackdamage = 30;
    std:: cout << "FragTrap " << this->name << " has created" << std:: endl;
}

FragTrap:: FragTrap(const FragTrap &frag): ClapTrap(frag.getname())
{
    *this = frag;
    std:: cout << "Copy FragTrap created" << std:: endl;
}

FragTrap:: ~FragTrap(void)
{
    std:: cout << "FragTrap " << this->name << " destroy" << std:: endl;
}

FragTrap &FragTrap::operator = (const FragTrap &frag)
{
    this->Hitpoint = frag.getHitpoint();
    this->Energypoint = frag.getEnergy();
    this->attackdamage = frag.getattackdamage();
    std:: cout << "Assignment operator for ClapTrap called" << std:: endl;

    return (*this);
}

void FragTrap:: attack(const std:: string &target)
{
   if (this->Hitpoint == 0)
    {
        std:: cout << "FragTrap " << this->name << " has dead !" << std:: endl;
        return ;
    }
    if (this->Energypoint != 0)
    {
        this->Energypoint--;
        std:: cout << "FragTrap " << this->name << " attacks " \
        << target << ", cousing points of damage!" << std:: endl;
    }
    else
        std:: cout << "no Energy" << std:: endl;
}

void FragTrap:: highFivesGuys(void)
{
    std:: cout << "\033[33mHight Fight\033[0m" << std:: endl;

    return ;
}
