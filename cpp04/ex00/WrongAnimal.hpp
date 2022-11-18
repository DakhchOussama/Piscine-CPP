/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:33:47 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:33:48 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"
#include <iostream>

class WrongAnimal
{
protected:
    std:: string type;
public:
    WrongAnimal(/* args */);
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &wrong_animal);
    WrongAnimal &operator = (const WrongAnimal &wrong_animal);

    void makeSound() const;
    std:: string get_type() const;
};
#endif
