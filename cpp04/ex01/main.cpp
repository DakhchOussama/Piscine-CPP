/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:36:50 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:36:52 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int size = 4;
	Animal* animals[size];

	std:: cout << std:: endl;
	for (int i = 0; i < size / 2 ; i++)
	{
		animals[i] = new Dog();
	}
	std:: cout << std:: endl;
	for (int i = size / 2 ; i < size; i++)
	{
		animals[i] = new Cat();
	}
	for ( int j = 0; j < size; j++)
		std:: cout << "Table : " << animals[j]->get_type() << std:: endl;
	std:: cout << std:: endl;
	for ( int j = 0; j < size; j++)
			delete animals[j];
}