/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odakhch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:38:27 by odakhch           #+#    #+#             */
/*   Updated: 2022/11/02 17:38:28 by odakhch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
    T *element;
    int _size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &copy);
    Array &operator = (const Array &copy);
    ~Array();
    int size();
    T &operator[] (int index);
    class OutOfBounds: public std:: exception
    {
        public :
            const char *what() const throw()
            {
                return ("Out of bounds");
            }
    };
};

template <class T>
Array<T>::Array()
{
    this->element = nullptr;
}

template <class T>
Array<T>:: Array(unsigned int n)
{
    if (n == 0)
    {
        this->element = nullptr;
        this->_size = 0;
        std:: cout << "Empty Array" << std:: endl;
        exit (1);
    }
    else
    {
        this->element = new T[n];
        this->_size = n;
        if (!this->element)
            exit (1);
    }
}

template <class T>
Array<T>::~Array()
{
    delete [] this->element;
}

template <class T>
Array<T>:: Array(const Array &copy)
{
    int i;

    i = 0;
    this->_size = copy._size;
    this->element = new T[this->_size];
    if (!this->element)
			exit(1);
    while (i < this->_size)
    {
        this->element[i] = copy.element[i];
        i++;
    }
}

template <class T>
Array<T> & Array<T>:: operator = (const Array &copy)
{
    int i;

    i = 0;
    if (this != &copy)
    {
        delete [] this->element;
        this->_size = copy._size;
        this->element = new T[this->_size];
        if (!this->element)
				exit(1);
        while (i < this->_size)
        {
            this->element[i] = copy.element[i];
            i++;
        }
    }
    return (*this);
}

template <class T>
int Array<T>:: size()
{
    return (this->_size);
}

template <class T>
T &Array<T>:: operator[](int index)
{
    if (index >= this->_size || index < 0)
        throw Array:: OutOfBounds();
    return (element[index]);
}
#endif
