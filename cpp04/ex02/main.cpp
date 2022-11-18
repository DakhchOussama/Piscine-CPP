/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:37:53 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:37:54 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *cat = new Cat();
    const Animal *dog = new Dog();

    cat->makeSound();
    dog->makeSound();

    delete cat;
    delete dog;
}
