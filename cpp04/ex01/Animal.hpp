/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:34:37 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:34:39 by odakhch          ###   ########.fr       */
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
    virtual void makeSound() const;
    std:: string get_type(void) const;

};
#endif
