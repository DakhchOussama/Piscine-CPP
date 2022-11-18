/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:19:58 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:19:59 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <exception>
#include <fstream>

class ShrubberyCreationForm: public Form
{
    private:
        std:: string target;
    public :
        ShrubberyCreationForm(std:: string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm  &operator = (const ShrubberyCreationForm &copy);

        class FormIsNotSIgned: public std:: exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException: public std:: exception
        {
            public:
                const char *what() const throw();
        };
        class FileNoCreateException: public std:: exception
        {
            public:
                const char *what() const throw();
        };
        void action(Bureaucrat const &executor) const;
};
#endif