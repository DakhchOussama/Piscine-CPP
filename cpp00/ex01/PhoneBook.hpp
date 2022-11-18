/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:42:06 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/21 18:42:19 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
   Contact contact[8];
   int index;
public:
    PhoneBook(void);
    ~PhoneBook(void);

    void add(void);
    void search(void);
    void printf(Contact contact);
};

# endif
