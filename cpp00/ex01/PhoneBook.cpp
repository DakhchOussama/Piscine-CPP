/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:41:31 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/21 18:41:42 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "PhoneBook_utils.hpp"

PhoneBook:: PhoneBook(void)
{
    this->index = 0;
}
PhoneBook:: ~PhoneBook(void)
{
}

void PhoneBook:: add(void)
{
    std:: string str;

    str = "";
    if (this->index > 7)
    {
        std:: cout << "Contact is full" << std:: endl;
    }
    while (!std:: cin.eof() && str == "")
    {
        std:: cout << "Enter a first name : ";
        if (std:: getline(std:: cin, str) && str != "")
        this->contact[this->index % 8].set_first_name(str);
    }
    str = "";
    while (!std:: cin.eof() && str == "")
    {
        std:: cout << "Enter " << this->contact[this->index % 8].get_fisrt_name() << " last name : ";
        if (std:: getline(std:: cin, str) && str != "")
        this->contact[this->index % 8].set_last_name(str);
    }
    str = "";
    while (!std:: cin.eof() && str == "")
    {
        std:: cout << "Enter " << this->contact[this->index % 8].get_fisrt_name() << " nickname : ";
        if (std:: getline(std:: cin, str) && str != "")
        this->contact[this->index % 8].set_nickname(str);
    }
    str = "";
    while (!std:: cin.eof() && str == "")
    {
        std:: cout << "Enter " << this->contact[this->index % 8].get_fisrt_name() << " phone number : ";
        if (std:: getline(std:: cin, str) && str != "")
        this->contact[this->index % 8].set_phone_number(str);
    }
    str = "";
    while (!std:: cin.eof() && str == "")
    {
        std:: cout << "Enter " << this->contact[this->index % 8].get_fisrt_name() << " darkest secret : ";
        if (std:: getline(std:: cin, str) && str != "")
        {
            this->contact[this->index % 8].set_darkest_secret(str);
            std:: cout << "successfull you add " << this->contact[this->index % 8].get_fisrt_name() << " in you phone" << std:: endl;
        }
    }
    this->index++;
}

void PhoneBook:: printf(Contact contact)
{
    std:: cout << ".... Loading ...." << std:: endl;
    if (!contact.get_fisrt_name().size())
    {
        std:: cout << " .. unavailable index ..";
        return ;
    }
    std:: cout << "First name : " << contact.get_fisrt_name() << std:: endl;
    std:: cout << "Last name : " << contact.get_last_name() << std:: endl;
    std:: cout << "nickname : " << contact.get_nickname() << std:: endl;
    std:: cout << "phone number : " << contact.get_phone_number() << std:: endl;
    std:: cout << "darkest secret : " << contact.get_darkest_secret() << std:: endl;
}

void PhoneBook:: search(void)
{
    std:: string str;
    int i;

    i = ft_search(this->contact);
    while (!std:: cin.eof())
    {
        std:: cout << "Enter index : ";
        if (std:: getline(std:: cin, str) && str != "")
        {
            if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
                this->contact[str[0] - 1 - '0'].get_fisrt_name().size())
                break ;
        }
        if (str != "")
            std:: cout << "Invalid index !" << std:: endl;
    }
    if (!std:: cin.eof() && i)
        this->printf(this->contact[str[0] - 1 - '0']);
    else if (!std:: cin.eof())
        std:: cout << " unavailable this contact in this phone " << std:: endl;

}
