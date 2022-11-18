/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:41:54 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/21 18:41:56 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
#include <string>

//class and include

class Contact
{
    private :
        std:: string first_name;
        std:: string last_name;
        std:: string nickname;
        std:: string phone_number;
        std:: string darkest_secret;
    public :
        void set_first_name(std:: string f_name);
        void set_last_name(std:: string l_name);
        void set_nickname(std:: string n_name);
        void set_phone_number(std:: string phone_num);
        void set_darkest_secret(std:: string darkest);
        std:: string get_fisrt_name(void) const;
        std:: string get_last_name(void) const;
        std:: string get_nickname(void) const;
        std:: string get_phone_number(void) const;
        std:: string get_darkest_secret(void) const;
        Contact(void);
        ~Contact(void);
};

#endif
