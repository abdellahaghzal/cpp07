/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 07:56:54 by aaghzal           #+#    #+#             */
/*   Updated: 2025/06/04 09:14:10 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void print(T& x) {
    std::cout << x
              << std::endl;
}

int main(void) {
    int arr[5] = {1 , 2, 3, 4, 5};

    iter(arr, 5, print<int>);
}
