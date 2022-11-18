/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:37:10 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:37:11 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std:: string type;
public:
    Animal(void);
    virtual ~Animal();
    Animal(const Animal &animal);
    Animal &operator = (const Animal &animal);
    virtual void makeSound() const = 0;
    std:: string get_type(void) const;
};
#endif
