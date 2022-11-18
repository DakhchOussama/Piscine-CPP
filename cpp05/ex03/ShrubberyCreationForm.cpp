/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:19:53 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:19:54 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm:: ShrubberyCreationForm(std:: string target): Form:: Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm:: ~ShrubberyCreationForm()
{
}

ShrubberyCreationForm:: ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form(copy)
{
}

ShrubberyCreationForm &ShrubberyCreationForm:: operator = (const ShrubberyCreationForm &copy)
{
    Form::operator=(copy);
    return(*this);
}

const char *ShrubberyCreationForm:: FormIsNotSIgned:: what() const throw()
{
    return ("Form is no signed");
}

const char *ShrubberyCreationForm:: GradeTooLowException:: what() const throw()
{
    return ("Grade too High Exception");
}

const char *ShrubberyCreationForm:: FileNoCreateException:: what() const throw()
{
    return ("File has no created");
}

void ShrubberyCreationForm:: action(Bureaucrat const &executor) const
{
    this->Form:: execute(executor);
    std:: fstream file(this->target + "_shrubbery", std::fstream :: out);
    if (!file.is_open())
        throw (ShrubberyCreationForm:: FileNoCreateException());
    file << "      ### " << std:: endl \
        << "     #o###" << std:: endl \
        << "   #####o###" << std:: endl \
        << "  #o#^#|#/###" << std:: endl \
        << "   ###^|/#o#" << std:: endl \
        << "    # }|{ #" << std:: endl \
        << "      }|{" << std:: endl \
        << "      }|{" << std:: endl;
    file.close();
}
