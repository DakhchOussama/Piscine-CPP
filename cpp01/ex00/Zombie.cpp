/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:36:28 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:36:30 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie(std:: string name)
{
    z_name = name;
}

Zombie:: ~Zombie()
{
    std:: cout << z_name << " die !.." << std:: endl;
}

void Zombie:: announce()
{
    std:: cout << z_name << ": " << "BraiiiiiiinnnzzzZ..." << std:: endl;
}
