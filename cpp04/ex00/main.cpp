/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:34:15 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:34:20 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	 Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std:: cout << wrong_cat->get_type() << std:: endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;
}
