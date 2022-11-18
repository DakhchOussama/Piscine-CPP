/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:40:43 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/05 16:40:44 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span _sp = Span(10000);
        int i= 0;
        while (i < 10000)
            _sp.addNumber(i++);
        std::cout << _sp.shortestSpan() << std::endl;
        std::cout << _sp.longestSpan() << std::endl;

        std:: cout << "------------" << std:: endl;
        Span sp = Span(10);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(10);
        sp.addNumber(0);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "-------------" << std:: endl;
        std:: vector<int> v;
        v.push_back(6);
        v.push_back(0);
        v.push_back(1);
        v.push_back(4);
        v.push_back(7);
        v.push_back(8);
        std:: vector<int>:: iterator beggin = v.begin();
        std:: vector<int>:: iterator end = v.end();
        Span span = Span(v.size());
        span.addNumbers(beggin, end);
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }
    catch (std:: exception &e)
    {
        std:: cout << e.what() << std:: endl;
    }
    return 0;
}
