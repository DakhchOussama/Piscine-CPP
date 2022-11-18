/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:11:01 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/17 10:11:03 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap playern1("oussama");
	ClapTrap playern2("luis");

	playern1.attack(playern2.getname());
	std:: cout << "Energy " << playern1.getname() << " " << playern1.getEnergy() << "\033[31m-\033[0m" << std:: endl;
	playern2.takeDamage(10);
	std:: cout << "Hitpoint " << playern2.getname() << " " << playern2.getHitpoint() << "\033[31m-\033[0m" << std:: endl;
	playern2.beRepaired(5);
	std:: cout << "Hitpoint " << playern2.getname() << " " << playern2.getHitpoint() << "\033[32m+\033[0m" << std:: endl;
	playern2.attack(playern1.getname());
	std:: cout << "Energy " << playern2.getname() << " " << playern2.getEnergy() << "\033[31m-\033[0m" << std:: endl;
	playern1.takeDamage(5);
	std:: cout << "Hitpoint " << playern1.getname() << " " << playern1.getHitpoint() << "\033[31m-\033[0m" << std:: endl;
}
