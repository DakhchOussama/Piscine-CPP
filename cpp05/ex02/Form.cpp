/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:15:41 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:15:43 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form:: Form():name(), grade(), grade_execution()
{
    throw Form:: GradeTooHighException();
}

Form:: Form(std:: string name,const int grade,const int grade_execution): name(name), grade(grade), grade_execution(grade_execution)
{
    if (grade < 1 || grade_execution < 1)
        throw Form:: GradeTooHighException();
    else if (grade > 150 || grade_execution > 150)
        throw Form:: GradeTooLowException();
    this->signIN = false;
}

Form:: Form(const Form &copy): name(copy.name), signIN(copy.signIN), grade(copy.grade), grade_execution(copy.grade_execution)
{
}

Form &Form:: operator = (const Form &form)
{
    if (this == &form)
        return (*this);
    this->signIN = form.signIN;
    return (*this);
}

Form:: ~Form()
{
}

void Form:: beSigned(Bureaucrat &bureau)
{
    if (bureau.getGrade() > this->grade)
            throw Form:: GradeTooLowException();
    this->signIN = true;
}

const char *Form:: GradeTooHighException:: what() const throw()
{
    return ("Grade too High Exception");
}

const char *Form:: GradeTooLowException:: what() const throw()
{
    return("Grade too Low Exception");
}

const char *Form:: FormIsNotSIgned:: what() const throw()
{
    return ("Form is no signed");
}

std:: string Form:: getName(void) const
{
    return (this->name);
}

int Form:: getGrade(void) const
{
    return (this->grade);
}

int Form:: getGrade_execution() const
{
    return (this->grade_execution);
}

bool Form:: getsignin() const
{
    return (this->signIN);
}

void Form:: execute(Bureaucrat const &executor) const
{
    if (this->getsignin() == false)
        throw (Form:: FormIsNotSIgned());
    else if (executor.getGrade() >= this->getGrade_execution())
        throw (Form:: GradeTooLowException());
}

std:: ostream &operator << (std:: ostream &out, const Form &form)
{
    out << form.getName() << ", form grade " << form.getGrade();
    return (out);
}
