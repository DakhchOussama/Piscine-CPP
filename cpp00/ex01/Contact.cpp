/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:41:12 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/21 18:41:23 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact:: Contact(void)
{

}
Contact:: ~Contact(void)
{

}

 void Contact::set_first_name(std:: string f_name)
 {
     this->first_name = f_name;
 }
void Contact::set_last_name(std:: string l_name)
{
    this->last_name = l_name;
}
void Contact::set_nickname(std:: string n_name)
{
    this->nickname = n_name;
}
void Contact::set_phone_number(std:: string phone_num)
{
    this->phone_number = phone_num;
}
void Contact::set_darkest_secret(std:: string darkest)
{
    this->darkest_secret = darkest;
}
std:: string Contact::get_fisrt_name(void) const
{
    return (this->first_name);
}
std:: string Contact::get_last_name(void) const
{
    return (this->last_name);
}
std:: string Contact::get_nickname(void) const
{
    return (this->nickname);
}
std:: string Contact::get_phone_number(void) const
{
    return (this->phone_number);
}
std:: string Contact::get_darkest_secret(void) const
{
    return (this->darkest_secret);
}
