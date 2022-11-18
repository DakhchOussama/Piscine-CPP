/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:03:37 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:03:38 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include <iomanip>

class convert
{
private:
    std:: string literal;
public:
    convert(std:: string literal);
    ~convert();
    convert(const convert &copy);
    convert &operator = (const convert &copy);
    void getInt();
    void getdouble();
    void getChar();
    void getfloat();
};
