/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:37:22 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/02 17:37:23 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <class T, class S>
void swap(T &arg1, S &arg2)
{
    T swap;
    swap = arg1;
    arg1 = arg2;
    arg2 = swap;
}

template <class T, class S>
T min(T arg1, S arg2)
{
    if (arg2 < arg1)
        return (arg2);
    else
        return (arg1);
    return (arg1);
}

template <class T, class S>
T max(T arg1, S arg2)
{
    if (arg2 > arg1)
        return (arg2);
    else
        return (arg1);
    return (arg1);
}
#endif