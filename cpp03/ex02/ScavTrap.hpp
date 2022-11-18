/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:13:03 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/17 10:13:04 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARTRAP_HPP
# define SCARTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
 public:
        ScavTrap(std:: string name);
        ScavTrap(void);
        ScavTrap(const ScavTrap &scar);
        ScavTrap &operator = (const ScavTrap &scar);
        ~ScavTrap();
        void attack(const std:: string &target);
        void guardate();

};
#endif
