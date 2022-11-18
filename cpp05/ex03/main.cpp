/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:20:02 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:20:05 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRondomInter;
		Form *rrf;
		Bureaucrat bureau("oussama", 44);

		rrf = someRondomInter.makeForm("ShrubberyCreationForm", "Bender");
		rrf->beSigned(bureau);
		rrf->action(bureau);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}
