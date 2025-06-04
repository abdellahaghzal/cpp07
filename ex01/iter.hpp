/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 07:56:51 by aaghzal           #+#    #+#             */
/*   Updated: 2025/06/04 08:17:32 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename func_ptr>
void iter(T* arr, int len, func_ptr f) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

#endif
