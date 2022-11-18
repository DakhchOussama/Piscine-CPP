/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:40:09 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:40:11 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(const std:: string str): type(str)
{
}

Weapon:: ~Weapon(void)
{

}

const std:: string& Weapon::getType(void)
{
    return (this->type);
}

void Weapon:: setType(std:: string str)
{
    this->type = str;
}
