/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:16:09 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:16:10 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm:: PresidentialPardonForm(std:: string target): Form:: Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm:: ~PresidentialPardonForm()
{
}

PresidentialPardonForm:: PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy)
{
}

PresidentialPardonForm &PresidentialPardonForm:: operator = (const PresidentialPardonForm &copy)
{
    Form::operator=(copy);

    return(*this);
}

const char *PresidentialPardonForm:: FormIsNotSIgned:: what() const throw()
{
    return ("Form is no signed");
}

const char *PresidentialPardonForm:: GradeTooLowException:: what() const throw()
{
    return ("Grade too High Exception");
}

const char *PresidentialPardonForm:: FileNoCreateException:: what() const throw()
{
    return ("File has no created");
}

void PresidentialPardonForm:: action(Bureaucrat const &executor) const
{
    this->Form:: execute(executor);
    std:: cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std:: endl;
}
