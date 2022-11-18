/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:37:15 by odakhch           #+#    #+#             */
/*   Updated: 2022/10/21 12:37:17 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain:: Brain()
{
    std:: cout << "Brain Constructor Created" << std:: endl;
}

Brain:: ~Brain()
{
    std:: cout << "Destroy Brain" << std:: endl;
}

Brain:: Brain(const Brain &brain)
{
    std:: cout << "Copy Brain has created" << std:: endl;
    *this = brain;
}

Brain &Brain:: operator= (const Brain &brain)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = brain.ideas[i];
    }
    return *this;
}