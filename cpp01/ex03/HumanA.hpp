/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:39:40 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:39:41 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &weaponA;
    std:: string name;
public:
    HumanA(std:: string name, Weapon &weapon);
    ~HumanA(void);
    void attack(void);
};

#endif
