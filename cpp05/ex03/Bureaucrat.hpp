/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:18:51 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:18:52 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
    private:
        const std:: string name;
        int grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std:: string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator = (const Bureaucrat &copy);
        class GradeTooHighException: public std:: exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException: public std:: exception
        {
            public:
                const char *what() const throw();
        };
        std:: string getName() const;
        int getGrade() const;
        void signForm(Form &form);
        void increment(void);
        void decrement(void);
        void executeForm(Form const &form);
};

std:: ostream& operator << (std:: ostream &out, const Bureaucrat &bureau);
#endif
