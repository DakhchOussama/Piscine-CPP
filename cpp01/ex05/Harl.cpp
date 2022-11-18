/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:40:58 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:40:59 by odakhch          ###   ########.fr       */
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
    int i;
    Harl harl;
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
       {
            (this->*fonction[i])();
            return ;
       }
        i++;
    }
    std :: cout << "invalid level" << std:: endl;
}
