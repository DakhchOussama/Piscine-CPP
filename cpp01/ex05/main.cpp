/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:41:12 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:41:13 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl annoying = Harl();
	annoying.complain("DEBUG");
	annoying.complain("INFO");
	annoying.complain("WARNING");
	annoying.complain("ERROR");
}
