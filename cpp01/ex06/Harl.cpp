/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:41:32 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:41:33 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl:: Harl()
{

}

Harl:: ~Harl()
{

}

void Harl:: debug(void)
{
    std:: cout << "[DEBUG] : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std:: endl;
}

void Harl:: info(void)
{
    std:: cout << "[INFO] : I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std:: endl;
}

void Harl:: warning(void)
{
    std:: cout << "[Waring] : I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std:: endl;
}

void Harl:: error(void)
{
    std:: cout << "[Error] : This is unacceptable! I want to speak to the manager now ." << std:: endl;
}

void Harl:: complain(std:: string level)
{
    Harl harl;
    int i;
    std:: string table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl:: *fonction[4])(void) = {
        &Harl:: debug,
        &Harl:: info,
        &Harl:: warning,
        &Harl:: error,
    };

    i = 0;
    while (i < 4)
    {
       if (level.compare(table[i]) == 0)
            break ;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*fonction[0])();
            std:: cout << std:: endl;
        case 1:
            (this->*fonction[1])();
            std:: cout << std:: endl;
        case 2:
            (this->*fonction[2])();
            std:: cout << std:: endl;
        case 3:
            (this->*fonction[3])();
            std:: cout << std:: endl;
            break;
        default:
            std:: cout << "[ Probably complaining about insignificant problems ]" << std:: endl;
    }
   
}
