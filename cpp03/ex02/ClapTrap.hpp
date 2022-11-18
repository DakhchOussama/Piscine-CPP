/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:12:34 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/17 10:12:35 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#   define CLAPTRAP_HPP


#include <iostream>

class ClapTrap
{
protected:
    std:: string name;
    unsigned int Hitpoint;
    unsigned int Energypoint;
    int attackdamage;
public:
    ClapTrap(std:: string name);
    ClapTrap(void);
    ~ClapTrap();
    ClapTrap(const ClapTrap &clap);
    ClapTrap &operator=(ClapTrap const &clap);
    //------member function used -----//
    void attack(const std:: string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    //--------Getter & Setter--------//
    std:: string getname(void) const;
    unsigned int getHitpoint(void) const;
    unsigned int getEnergy(void) const;
    unsigned int getattackdamage(void) const;
};

std::ostream & operator << (std::ostream &out, const ClapTrap &clap);

#endif
