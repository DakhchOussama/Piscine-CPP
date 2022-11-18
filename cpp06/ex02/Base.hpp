/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:04:32 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/01 11:04:33 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{
	public:
		Base();
		virtual ~Base();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
