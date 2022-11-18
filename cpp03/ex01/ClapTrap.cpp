/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:13:59 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/17 10:14:01 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap:: ClapTrap(void)
{
    std:: cout << "Default Constructor created" << std:: endl;
}

ClapTrap:: ClapTrap(std:: string name): name(name), Hitpoint(10), Energypoint(10), attackdamage(0)
{
    std:: cout << "ClapTrap " << this->name << " has created " << std:: endl;
}

ClapTrap:: ~ClapTrap()
{
    std:: cout << "ClapTrap " << this->name << " destroy" << std:: endl;
}

ClapTrap:: ClapTrap(const ClapTrap &clap)
{
    *this = clap;
    std:: cout << "Copy ClapTrap " << this->name << " created" << std:: endl;
}

void ClapTrap:: attack(const std:: string &target)
{
    if (this->Hitpoint == 0)
    {
        std:: cout << "ClapTrap " << this->name << " has dead !" << std:: endl;
        return ;
    }
    if (this->Energypoint != 0)
    {
        this->Energypoint--;
        std:: cout << "ClapTrap " << this->name << " attacks " \
        << target << ", cousing points of damage!" << std:: endl;
    }
    else
        std:: cout << "no Energy" << std:: endl;
}

void ClapTrap:: beRepaired(unsigned int amount)
{
    this->Hitpoint += amount;
    this->Energypoint--;
    std:: cout << "ClapTrap " << this->name << " be Repaired" \
    << std:: endl;
}

void ClapTrap:: takeDamage(unsigned int amount)
{
    if (this->Hitpoint != 0)
    {
        if (amount > this->Hitpoint)
            this->Hitpoint = 0;
        else
            this->Hitpoint -= amount;
        std:: cout << "ClapTrap " << this->name << " take damage" \
        << std:: endl;
    }
    else
    {
        std:: cout << "Claptrap " << this->name << "has dead " << std:: endl;
    }
}

unsigned int ClapTrap:: getHitpoint(void) const
{
    return(this->Hitpoint);
}

unsigned int ClapTrap:: getEnergy(void) const
{
    return (this->Energypoint);
}

unsigned int ClapTrap:: getattackdamage(void) const
{
    return (this->attackdamage);
}

std::string ClapTrap:: getname(void) const
{
    return (this->name);
}

ClapTrap &ClapTrap:: operator=(ClapTrap const &clap)
{
    std:: cout << "Assignment operator for ClapTrap called" << std:: endl;
    this->Hitpoint = clap.getHitpoint();
    this->Energypoint = clap.getEnergy();
    this->attackdamage = clap.getattackdamage();
    return (*this);
}

std::ostream& operator << (std::ostream &out, const ClapTrap& clap)
{
    out << clap.getname();
    return (out);
}
