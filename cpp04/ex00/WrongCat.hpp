/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:34:08 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:34:11 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &animal);
    WrongCat &operator = (const WrongCat &cat);

    void makeSound() const;
    std:: string get_type() const;
};
#endif
