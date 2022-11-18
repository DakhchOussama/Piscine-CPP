/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:38:17 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/02 17:38:19 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
    int array[5] = {0,1,2,3,4};
    iter(array, 5, function);

    std:: cout << "*************" << std:: endl;
    char array1[5] = {'a','b','c','d','e'};
    iter(array1, 5, function);

    std:: cout << "*************" << std:: endl;
    std:: string array2[5] = {"aa","bb","cc","dd","ee"};
    iter(array2, 5, function);
}
