/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:40:42 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/21 18:40:54 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    if (argc < 2)
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
            {
                argv[i][j] = argv[i][j]-'a'+'A';
            }
            j++;
        }
        std:: cout << argv[i];
        i++;
    }
    return (0);
}
