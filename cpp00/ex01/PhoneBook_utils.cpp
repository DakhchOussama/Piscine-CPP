/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:42:23 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/21 18:42:25 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_utils.hpp"

std:: string edit_width(std:: string str, long max)
{
    if (str.size() > max)
    {
        str = str.substr(0 , max - 1);
        str[str.size() - 1] = '.';
    }
    return (str);
}

std:: string add_space(int space)
{
    std:: string str;
    while (space--)
        str.append(" ");
    return (str);
}

int ft_search(Contact contacts[8])
{
    int i;
    char c;
    std:: string str;
    
    std:: cout << "----------------------------------------------" << std:: endl;
    std:: cout << "|  index   | firstname| lastname | nickname |" << std:: endl;
    std:: cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << std:: endl;
    i = 0;
    c = '0';

    while (++c <= '8')
    {
        if (contacts[c - 1 - '0'].get_fisrt_name().size() && ++i)
        {
            str = c;
            str = edit_width(str, 10);
            std:: cout << "|" << add_space(10 - str.size()) << str;
            str = edit_width(contacts[c - 1 - '0'].get_fisrt_name(), 10);
            std:: cout << "|" << add_space(10 - str.size()) << str;
            str = edit_width(contacts[c - 1 - '0'].get_last_name(), 10);
            std:: cout << "|" << add_space(10 - str.size()) << str;
            str = edit_width(contacts[c - 1 - '0'].get_nickname(), 10);
            std:: cout << "|" << add_space(10 - str.size()) << str;
            std:: cout << "|" << std:: endl;
        }
    }
    std:: cout << "----------------------------------------------" << std:: endl;
    return (i);
}
