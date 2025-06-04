/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 07:57:03 by aaghzal           #+#    #+#             */
/*   Updated: 2025/06/04 07:57:04 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T& min(T& a, T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T& max(T& a, T& b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif
