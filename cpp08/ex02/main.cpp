/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:40:54 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/05 16:40:55 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
   MutantStack <int> stack;
   std:: list <int> li;

    stack.push(5);li.push_back(5);
    stack.push(14);li.push_back(14);
    stack.push(12);li.push_back(12);
    stack.push(4);li.push_back(4);
    stack.push(7);li.push_back(7);

    MutantStack<int>:: iterator it = stack.begin();
    MutantStack<int>:: iterator it2 = stack.end();
    std:: list<int>:: iterator begin_list = li.begin();
    std:: list<int>:: iterator end_list = li.end();

    ++it;++begin_list;
    --it;--begin_list;

    while (it != it2 && begin_list != end_list)
    {
            std:: cout << *it << '\t' << *begin_list << std:: endl;
            ++it;
            ++begin_list;
    }
    std:: cout << std:: endl << stack.size() << '\t' << li.size() << std:: endl;

    return (0);
}
