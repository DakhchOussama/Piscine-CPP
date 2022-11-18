/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:38:14 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/02 17:38:15 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <class T>
void function(T arg1)
{
    std:: cout << arg1 << std:: endl;;
}

template <class T>
void iter(T *arg1, int arg2, void (function)(T const &arg1))
{
    int i;

    i = 0;
    while (i < arg2)
    {
        (function)(arg1[i]);
        i++;
    }
}
#endif