/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:37:14 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:37:16 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie()
{
}

Zombie:: ~Zombie()
{
    std:: cout << z_name << " die !.." << std:: endl;
}

void Zombie:: announce()
{
    std:: cout << z_name << ": " << "BraiiiiiiinnnzzzZ..." << std:: endl;
}

void Zombie:: set_name(std:: string name)
{
    z_name = name;
}
