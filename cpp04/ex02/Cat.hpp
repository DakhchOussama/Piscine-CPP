/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:37:33 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:37:34 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &cat);
        Cat &operator = (const Cat &cat);
        void makeSound() const;
};
#endif
