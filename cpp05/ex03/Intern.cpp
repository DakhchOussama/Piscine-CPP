/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:19:16 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:19:17 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char *Intern:: NoFoundForm:: what() const throw()
{
    return ("No Found Form");
}

Form *Intern:: makeForm(std:: string const &name_form, std:: string const &target)
{
    const std:: string nameform[3] =
    {
        "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"
    };
    int i = (name_form == "ShrubberyCreationForm") * 1
            + (name_form == "RobotomyRequestForm") * 2
            + (name_form == "PresidentialPardonForm") * 3;
    Form *tmp = NULL;
    switch (i)
    {
    case 0:
        throw (Intern:: NoFoundForm());
        break;
    case 1:
        tmp = new ShrubberyCreationForm(target);
        std:: cout << "Inter creates " << name_form << std:: endl;
        break;
    case 2:
        tmp = new RobotomyRequestForm(target);
        std:: cout << "Inter creates " << name_form << std:: endl;
        break;
    case 3:
        tmp = new PresidentialPardonForm(target);
        std:: cout << "Inter creates " << name_form << std:: endl;
        break;
    }
    return tmp;
}
