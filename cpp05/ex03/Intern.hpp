/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:19:21 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:19:23 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "exception"

class Intern
{
    public:
        Form *makeForm(std:: string const &name_form, std:: string const &target);
        class NoFoundForm: public std:: exception
        {
            public:
                const char *what() const throw();
        };
};
