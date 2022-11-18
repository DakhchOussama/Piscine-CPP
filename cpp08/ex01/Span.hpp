/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:40:37 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/05 16:40:39 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>

class Span
{
private:
    unsigned int N;
    std:: vector<int>vec;
public:
    Span();
    Span(unsigned int N);
    ~Span();
    Span(const Span &copy);
    Span &operator = (const Span &copy);
    void addNumber(unsigned int N);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    class ExceptionNoFound: public std:: exception
    {
        public :
            const char *what() const throw();
    };
     class ExceptionFullOf: public std:: exception
    {
        public :
            const char *what() const throw();
    };
    void addNumbers(std:: vector<int>:: iterator begin, std:: vector<int>:: iterator end);
};
#endif