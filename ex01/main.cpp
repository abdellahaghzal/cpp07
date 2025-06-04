/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 07:56:54 by aaghzal           #+#    #+#             */
/*   Updated: 2025/06/04 08:17:38 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void print(int i);

int main(void) {
    int arr[5] = {1 , 2, 3, 4, 5};

    iter(arr, 5, print);
}

void print(int i) {
    std::cout << i
              << std::endl;
}
