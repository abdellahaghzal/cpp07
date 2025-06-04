/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 07:56:51 by aaghzal           #+#    #+#             */
/*   Updated: 2025/06/04 09:08:51 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T* arr, int len, void (*f)(T&)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T>
void iter(T* arr, int len, void (*f)(const T&)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

#endif
