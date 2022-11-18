/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:18:44 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:18:46 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat:: Bureaucrat()
{
    grade = 0;
}

Bureaucrat:: Bureaucrat(std:: string name, int grade): name(name)
{
    if (grade < 1)
        throw Bureaucrat:: GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat:: GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat:: Bureaucrat(const Bureaucrat &bureau): name(bureau.name), grade(bureau.grade)
{
}

Bureaucrat &Bureaucrat:: operator = (const Bureaucrat &copy)
{
    if (this != &copy)
    {
        this->grade = copy.grade;
    }
    return (*this);
}

Bureaucrat:: ~Bureaucrat()
{
}


const char *Bureaucrat:: GradeTooHighException:: what() const throw()
{
    return ("Grade too High Exception");
}

const char *Bureaucrat:: GradeTooLowException:: what() const throw()
{
    return("Grade too Low Exception");
}

std:: string Bureaucrat:: getName(void) const
{
    return (this->name);
}

int Bureaucrat:: getGrade(void) const
{
    return (this->grade);
}

void Bureaucrat:: increment(void)
{
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}

void Bureaucrat:: decrement(void)
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}

std:: ostream &operator << (std:: ostream &out, const Bureaucrat &bureau)
{
    out << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
    return (out);
}

void Bureaucrat:: signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std:: cout << this->name << " signed " << form.getName() << std:: endl;
    }
    catch (const std:: exception &e)
    {
        std:: cout << this->name << " couldn't sign " << form.getName() << \
        " because " << e.what() << std:: endl;
    }
}

void Bureaucrat:: executeForm(Form const &form)
{
   if (form.getGrade_execution() < 1)
        throw (Bureaucrat:: GradeTooLowException());
    else if (form.getGrade_execution() > 150)
        throw (Bureaucrat:: GradeTooHighException());
    std:: cout << this->name << " executed " << form.getName() << std:: endl;
}
