/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:14:27 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:14:32 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std:: string name;
        int grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std:: string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator = (const Bureaucrat &copy);
        ~Bureaucrat();
        class GradeTooHighException: public std:: exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException: public std:: exception
        {
            public:
                virtual const char *what() const throw();
        };
        std:: string getName() const;
        int getGrade() const;
        void increment(void);
        void decrement(void);
};

std:: ostream& operator << (std:: ostream &out, const Bureaucrat &bureau);
#endif
