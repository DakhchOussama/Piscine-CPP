/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:16:56 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:27:45 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test_form(Form &shrub, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(shrub);
	wrong.executeForm(shrub);
	correct.signForm(shrub);
	shrub.action(correct);
	correct.executeForm(shrub);
}

int main()
{
	try
	{
		Bureaucrat bureau("jaeskim", 1);
		Bureaucrat wrong("wrong", 44);
		ShrubberyCreationForm shrub("target");
		RobotomyRequestForm robot("target");
		PresidentialPardonForm president("target");
		test_form(shrub, bureau, wrong);
		std:: cout << std:: endl;
		test_form(robot, bureau, wrong);
		std:: cout << std:: endl;
		test_form(president, bureau, wrong);
	}
	catch(std:: exception &e)
	{
		std:: cout << e.what() << std:: endl;
	}
	return 0;
}
