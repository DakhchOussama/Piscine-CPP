/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:03:43 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:03:44 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        convert obj(argv[1]);
        obj.getChar();
        obj.getInt();
        obj.getfloat();
        obj.getdouble();
        (void) argc;
    }
    else
        std:: cout << "NO argument" << std:: endl;
    return (0);
}
