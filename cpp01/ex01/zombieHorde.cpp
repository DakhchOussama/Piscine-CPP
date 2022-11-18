/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:37:37 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:37:39 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std:: string name)
{
    int i;

    i = 0;
    if (N < 1)
    {
        std:: cout << "Invalid number of Zombie !" << std:: endl;
        return (NULL);
    }
    Zombie* zombie = new Zombie[N];
    while (i < N)
    {
        zombie[i].set_name(name);
        i++;
    }
    return (zombie);
}
