/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:34:48 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:34:49 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std:: string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &brain);
    Brain &operator = (const Brain &brain);
};

#endif
