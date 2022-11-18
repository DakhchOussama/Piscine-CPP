/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:42:40 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/21 18:42:41 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    
    PhoneBook phone;
    std:: string cmd;

    while (cmd != "EXIT")
    {
        std:: cout << "Enter Command >";
        std:: getline(std:: cin, cmd);
        if (cmd == "ADD")
            phone.add();
        else if (cmd == "SEARCH")
            phone.search();
        if (std:: cin.eof())
        {
            std :: cout << std:: endl;
            return (0);
        }
    }
    return (0);
}
