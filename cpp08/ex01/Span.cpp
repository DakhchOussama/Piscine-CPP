/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:40:32 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/05 16:40:33 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span:: Span()
{
    this->N = 0;
}

Span:: Span(unsigned int N)
{
    this->N = N;
}

Span:: ~Span()
{
}

Span:: Span(const Span &copy)
{
    this->N = copy.N;
    this->vec = copy.vec;
}

Span &Span:: operator=(const Span &copy)
{
    if (this != &copy)
    {
        this->N = copy.N;
        this->vec = copy.vec;
    }
    return (*this);
}

const char *Span:: ExceptionNoFound:: what() const throw()
{
    return ("NoFound");
}

const char *Span:: ExceptionFullOf:: what() const throw()
{
    return ("Span is Full");
}

void Span:: addNumber(unsigned int _N)
{
    if (vec.size() == N)
        throw ExceptionFullOf();
    vec.push_back(_N);
}

unsigned int Span:: shortestSpan()
{
    int shortes;

    if (vec.empty() == 1 && vec.size() == 1)
        throw ExceptionNoFound();
    std:: sort(vec.begin(), vec.end());
    shortes = std::abs(vec.at(0) - vec.at(1));
    for (unsigned int i = 1; i < vec.size(); i++)
    {
        if (std::abs(vec[i] - vec[i + 1]) < shortes)
            shortes = std::abs(vec[i] - vec[i + 1]);
    }
    return (shortes);
}

unsigned int Span:: longestSpan()
{
    int max;
    int min;

    std:: vector<int>:: iterator it1 = vec.begin();
    std:: vector<int>:: iterator it2 = vec.end();

    if (vec.empty() == 1 && vec.size() == 1)
        throw ExceptionNoFound();
    max = *std:: max_element(it1, it2);
    min = *std:: min_element(it1, it2);
    return (max - min);
}

void Span:: addNumbers(std:: vector<int>:: iterator begin, std:: vector<int>:: iterator end)
{
    if (begin == end)
        return ;
    std:: vector<int>:: iterator it;
    for (it = begin; it != end; it++)
        vec.push_back(*it);
}
