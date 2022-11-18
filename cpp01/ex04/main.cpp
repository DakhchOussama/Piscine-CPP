/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:40:42 by odakhch           #+#    #+#             */
/*   Updated: 2022/09/25 11:40:43 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std:: string my_replace(std:: string s1, std:: string  word_remplace, std:: string word_change)
{
    size_t search;
    size_t size_remplace;
    size_t size_change;

    search = s1.find(word_change);
    size_change = word_change.length();
    size_remplace = word_remplace.length();
    while (search != std::string::npos)
    {
        s1.erase(search, size_change);
        s1.insert(search, word_remplace);
        search = s1.find(word_change);
    }
    return (s1);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std:: cout << "Invalid index;" << std:: endl;
        return (0);
    }
    else 
    {
        std:: ifstream Myfile;
        std:: ofstream C_Myfile;
        std:: string filename;
        std:: string s1;
        std:: string word_change;
        std:: string word_replace;

        word_change = argv[2];
        word_replace = argv[3] ;
        filename = argv[1];
        Myfile.open(filename);
        if (filename.empty() || word_change.empty() || word_replace.empty() || Myfile.fail())
        {
            std:: cout << "Error : Empty argument" << std::endl;
            return (0);
        }
        if (!std:: getline(Myfile, s1, (char)EOF))
        {
            std:: cout << "Error : Empty File";
            return (0);
        }
        C_Myfile.open(filename + ".replace", std:: ios:: out | std:: ios:: trunc);
        if (C_Myfile.is_open())
        {
            s1 = my_replace(s1, word_replace, word_change);
            C_Myfile << s1;
             Myfile.close();
        }
        else
        {
            std:: perror("Error file");
            Myfile.close();
            return (0);
        }
    }
    return (0);
}
    
