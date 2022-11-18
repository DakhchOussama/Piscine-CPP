/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:12:13 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/17 10:12:14 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap player1("oussama");
	ScavTrap player2("luis");

	player1.attack(player2.getname());
	std:: cout << "Energy " << player1.getname() << " " << player1.getEnergy() << "\033[31m-\033[0m" << std:: endl;
	player2.takeDamage(5);
	std:: cout << "Hitpoint " << player2.getname() << " " << player2.getHitpoint() << "\033[31m-\033[0m" << std:: endl;
	player2.beRepaired(10);
	std:: cout << "Hitpoint " << player2.getname() << " " << player2.getHitpoint() << "\033[32m+\033[0m" << std:: endl;
	std:: cout << "Energy " << player2.getname() << " " << player2.getEnergy() << "\033[31m-\033[0m" << std:: endl;
	player2.guardate();
}
