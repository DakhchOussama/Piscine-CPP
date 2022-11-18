/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:40:00 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:40:02 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weaponB;
    std:: string name;
public:
    HumanB(std:: string str);
    ~HumanB(void);
    void attack(void);
    void setWeapon(Weapon &weapon);
};
