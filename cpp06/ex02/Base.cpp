/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:04:27 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:04:28 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base:: Base()
{
}

Base::~Base()
{
}


Base *generate(void)
{
	std:: srand(time(NULL));
	int random = (rand() % 3);
	Base *base;
	switch (random)
	{
		case 0:
			base = new ClassA;
			break;
		case 1:
			base = new ClassB;
			break;
		case 2:
			base = new ClassC;
			break;
		default:
			base = NULL;
	}
	return (base);
}

void identify(Base *p)
{
	ClassA *new_A = dynamic_cast<ClassA*>(p);
	if (new_A)
	{
		std:: cout << "A" << std:: endl;
	}
	ClassB *new_B = dynamic_cast<ClassB*>(p);
	if (new_B)
	{
		std:: cout << "B" << std:: endl;
	}
	ClassC *new_C = dynamic_cast<ClassC*>(p);
	if (new_C)
	{
		std:: cout << "C" << std:: endl;
	}
}

void identify(Base &p)
{
	try
	{
		srand(time(NULL));
		int res = (rand() % 3);
		Base base;
		switch (res)
		{
			case 0:
			{
				base = dynamic_cast<ClassA &>(p);
				std::cout << "The actual type of the object pointed to by p is A" << std::endl;
				break;
			}
			case 1:
			{
				base = dynamic_cast<ClassB &>(p);
				std::cout << "The actual type of the object pointed to by p is B" << std::endl;
				break;
			}
			case 2:
			{
				base = dynamic_cast<ClassC &>(p);
				std::cout << "The actual type of the object pointed to by p is C" << std::endl;
				break;
			}
			default:
				std::cout << "No type" << std::endl;
				break;
		}
	}
	catch(const std::bad_cast & e)
	{
		std::cerr << "Bad cast error:" << std::endl;
	}
}
