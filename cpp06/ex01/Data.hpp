/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:04:05 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:04:06 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
#include <iomanip>

struct Data
{
	int number;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif
