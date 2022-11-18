/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:40:59 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/05 16:41:00 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUNTANTSTACK_HPP
#define MUNTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <string>
#include <list>

template <typename T, class Container = std:: deque<T> >
class MutantStack: public std:: stack<T>
{
    private:

    public:
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(const MutantStack &copy): std:: stack<T>(&copy){}
        MutantStack &operator= (const MutantStack &copy)
        {
            (void)copy;
            return (*this);
        }
        typedef typename MutantStack<T>::container_type:: iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};
#endif