/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:37:21 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:37:23 by odakhch          ###   ########.fr       */
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
