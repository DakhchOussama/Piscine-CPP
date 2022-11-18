/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:37:30 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:37:32 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie;
    int N_zombie = -1;
    int i;

    std:: string name = "Foo";
    zombie = zombieHorde(N_zombie, name);
    i = 0;
    while (i < N_zombie)
    {
        zombie->announce();
        i++;
    }
    delete[] zombie;
    return (0);
}
