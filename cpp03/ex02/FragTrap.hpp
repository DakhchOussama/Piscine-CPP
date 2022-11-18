/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:12:50 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/17 10:12:52 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std:: string name);
        FragTrap(void);
        FragTrap(const FragTrap &frag);
        ~FragTrap(void);
        FragTrap &operator = (const FragTrap &frag);
        void attack(const std:: string &target);
        void highFivesGuys(void);
};

#endif
