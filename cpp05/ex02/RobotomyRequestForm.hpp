/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:16:35 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:16:36 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <exception>
#include <fstream>

class RobotomyRequestForm: public Form
{
    private:
        std:: string target;
    public :
        RobotomyRequestForm(std:: string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();
        RobotomyRequestForm  &operator = (const RobotomyRequestForm &copy);

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