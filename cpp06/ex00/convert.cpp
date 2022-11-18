/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:03:24 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:03:26 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

convert:: convert(std:: string literal): literal(literal)
{
}

convert:: ~convert()
{
}

convert:: convert(const convert &copy)
{
    this->literal = copy.literal;
}

convert &convert:: operator= (const convert &copy)
{
    this->literal = copy.literal;
    return (*this);
}

void convert:: getInt()
{
    int num;
    try
    {
        num = std:: stoi(this->literal);
        std:: cout << "int : " << num << std:: endl;
    }
    catch(std:: invalid_argument &e)
    {
        std:: cout << "int : impossible" << std:: endl;
    }
    catch(std:: out_of_range &e)
    {
        std:: cout << "int : Out of range" << std:: endl;
    }
}

void convert:: getfloat()
{
    float num;
    try
    {
        num = std:: stof(this->literal);
        std:: cout << "float : " << std:: fixed <<std:: setprecision(1) << num << "f" << std:: endl;

    }
    catch(std:: invalid_argument &e)
    {
        std:: cout << "float : impossible" << std:: endl;
    }
    catch(std:: out_of_range &e)
    {
        std:: cout << "float : Out of range" << std:: endl;
    }
}

void convert:: getdouble()
{
    double num;
    try
    {
        num = std:: stod(this->literal);
        std:: cout << "double : " << num << std:: endl;
    }
    catch(std:: invalid_argument &e)
    {
        std:: cout << "double : impossible" << std:: endl;
    }
    catch(std:: out_of_range &e)
    {
        std:: cout << "double : Out of range" << std:: endl;
    }
}

int check(char c)
{
    if (c >= 0 && c <= 32)
        return (0);
    return (1);
}

void convert:: getChar()
{
    try
    {
        int num;
        char c;
        num = std:: stoi(this->literal);
        if (num > 0)
        {
            c = static_cast<char>(num);
            if (check(c) == 1)
                std:: cout << "char : " << c << std:: endl;
            else
                std:: cout << "char : Non displayable" << std:: endl;
        }
        else
            std:: cout << "char : Non displayable" << std:: endl;

    }
    catch(std:: invalid_argument &e)
    {
        std:: cout << "char : impossible" << std:: endl;
    }
    catch(std:: out_of_range &e)
    {
        std:: cout << "char : Out of range" << std:: endl;
    }
}
