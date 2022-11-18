/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:14:37 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/27 14:25:35 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string.h>

int main()
{
    try
    {
        Bureaucrat bureau("oussama", 44);
        std:: cout << bureau << std:: endl;
        bureau.increment();
        std:: cout << bureau << std:: endl;
    }
    catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
