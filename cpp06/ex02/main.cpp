/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:05:26 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:05:27 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"


int main()
{
    Base *base;
    base = generate();
    identify(base);
    identify(*base);
}
