/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:39:32 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:39:34 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA:: HumanA(std:: string name, Weapon &weapon):weaponA(weapon), name(name)
{
    std:: cout << "HumanA " << name << " " \
    << weaponA.getType() << " created" << std:: endl;
}

HumanA:: ~HumanA(void)
{
    std:: cout << "HumanA " << this->name << " destroy" << std:: endl;
}

void HumanA:: attack(void)
{
    std:: cout << this->name << " " << \
    "attacks with their " << this->weaponA.getType() << std:: endl;
}
