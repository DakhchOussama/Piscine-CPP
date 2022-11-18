/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:40:19 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:40:22 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std:: string type;
    public:
        Weapon();
        Weapon(std:: string str);
        ~Weapon(void);
        const std:: string& getType(void);
        void setType(std:: string str);
};
#endif
