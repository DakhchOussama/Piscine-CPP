/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:37:23 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:37:25 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std:: string z_name;
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void set_name(std:: string name);
};

Zombie *zombieHorde(int N, std:: string name);

#endif