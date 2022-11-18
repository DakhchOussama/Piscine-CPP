/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:36:35 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:36:38 by odakhch          ###   ########.fr       */
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
    Zombie(std:: string name);
    ~Zombie();
    void announce(void);
};

void randomChump( std::string name );
Zombie* newZombie(std:: string name);

#endif