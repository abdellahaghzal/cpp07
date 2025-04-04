#ifndef ITER_HPP
# define ITER_HPP

template <typename t_arr, typename func_ptr>
void iter(t_arr* arr, int len, func_ptr f)
{
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

#endif
