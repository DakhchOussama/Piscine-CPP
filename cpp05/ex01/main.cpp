/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:15:19 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:15:21 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureau("oussama", 140);
        Form form("luis", 141, 10);
        std:: cout << bureau << std:: endl;
        std:: cout << form << std:: endl;

        bureau.signForm(form);

    }
    catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
