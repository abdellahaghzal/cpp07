/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 07:56:43 by aaghzal           #+#    #+#             */
/*   Updated: 2025/06/04 08:11:38 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <exception>
# include <iostream>

# define DEBUG true

template <typename T>
class Array {
    private:
        size_t length;
        T* arr;
    public:
        Array() :
        length(0),
        arr(NULL) {
            if (DEBUG)
                std::cout << "Array Default Constructor is called"
                          << std::endl;
        }

        Array(size_t n) :
        length(n),
        arr(new T[n]()) {
            if (DEBUG)
                std::cout << "Array Assignment Constructor is called"
                          << std::endl;
        }

        Array(const Array& other) :
        length(other.length) {
            if (DEBUG)
                std::cout << "Array Copy Constructor is called"
                          << std::endl;
            this->arr = new T[this->length];
            for (size_t i = 0; i < this->length; i++) {
                this->arr[i] = other.arr[i];
            }
        }

        Array& operator=(const Array& other) {
            if (DEBUG)
                std::cout << "Array Assignment Operator is called"
                          << std::endl;
            if (&other != this) {
                this->length = other.length;
                this->arr = new T[this->length];
                for (size_t i = 0; i < this->length; i++) {
                    this->arr[i] = other.arr[i];
                }
            }
            return (*this);
        }

        ~Array() {
            if (DEBUG)
                std::cout << "Array Destructor is called"
                          << std::endl;
            delete[] this->arr;
        }

        T& operator[](size_t index) {
            if (index >= length)
                throw (std::exception());
            return arr[index];
        }

        int size(void) {
            return (length);
        }
};

#endif
