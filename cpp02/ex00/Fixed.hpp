/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:32:53 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/11 09:33:23 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixed_point;
    static const int num = 8;
public:
    Fixed(const Fixed &fixed_point);
    Fixed();
    ~Fixed();
    Fixed & operator = (const Fixed &fixed_point);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
