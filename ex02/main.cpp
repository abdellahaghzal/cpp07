/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 07:56:40 by aaghzal           #+#    #+#             */
/*   Updated: 2025/06/04 08:17:56 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define ARR_LEN 5

int main(void) {
    Array<int> arr;

    std::cout << arr.size()
              << std::endl
              << std::endl;

    arr = Array<int>(ARR_LEN);

    std::cout << arr.size()
              << std::endl
              << std::endl;

    for (int i = 0; i < ARR_LEN; i++) {
        arr[i] = i;
    }
    int i = 0;
    try {
        while (true) {
            std::cout << arr[i]
                      << std::endl;
            i++;
        }
    }
    catch (std::exception& e) {
        std::cout << "too far"
                  << std::endl;
    }
}
