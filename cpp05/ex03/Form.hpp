/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:19:11 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:19:12 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std:: string name;
        bool signIN;
        const int grade;
        const int grade_execution;
    public:
        Form(std:: string name, const int grade, const int grade_execution);
        Form(void);
        ~Form();
        Form(const Form &copy);
        Form & operator = (const Form &form);
        void beSigned(Bureaucrat &bureau);
        class GradeTooHighException: public std:: exception
        {
            public :
                const char *what() const throw();
        };
        class GradeTooLowException: public std:: exception
        {
            public:
                const char *what() const throw();
        };
        class FormIsNotSIgned: public std:: exception
        {
            public:
                const char *what() const throw();
        };
        std:: string getName() const;
        int getGrade() const;
        int getGrade_execution() const;
        bool getsignin() const;
        void execute(Bureaucrat const &executor) const;
        virtual void action(Bureaucrat const &executor) const = 0;
};

std:: ostream& operator << (std:: ostream &out, const Form &form);
#endif
