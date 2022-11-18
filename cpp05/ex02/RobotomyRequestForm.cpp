/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:16:24 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:16:25 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm:: RobotomyRequestForm(std:: string target): Form:: Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm:: ~RobotomyRequestForm()
{
}

RobotomyRequestForm:: RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy)
{
}

RobotomyRequestForm &RobotomyRequestForm:: operator = (const RobotomyRequestForm &copy)
{
    Form::operator=(copy);
    return (*this);
}

const char *RobotomyRequestForm:: FormIsNotSIgned:: what() const throw()
{
    return ("Form is no signed");
}

const char *RobotomyRequestForm:: GradeTooLowException:: what() const throw()
{
    return ("Grade too High Exception");
}

const char *RobotomyRequestForm:: FileNoCreateException:: what() const throw()
{
    return ("File has no created");
}

void RobotomyRequestForm:: action(Bureaucrat const &executor) const
{
    this->Form:: execute(executor);
    std:: srand(time(NULL));
    if (std:: rand() % 2)
        std:: cout << this->target << " has been robotomized" << std:: endl;
    else
        std:: cout << this->target << " has failed to be robot" << std:: endl;
}
