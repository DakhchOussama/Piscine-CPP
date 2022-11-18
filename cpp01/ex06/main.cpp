/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:41:47 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:41:48 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[]) {
	Harl annoying = Harl();
	if (argc != 2)
	{
		std:: cout << "Error to read";
		return (0);
	}
	annoying.complain(argv[1]);
}
