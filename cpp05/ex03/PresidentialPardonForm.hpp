/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:19:34 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:19:35 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <exception>
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
    private:
        std:: string target;
    public :
        PresidentialPardonForm(std:: string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm  &operator = (const PresidentialPardonForm &copy);

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