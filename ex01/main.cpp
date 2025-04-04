#include "iter.hpp"
#include <iostream>

void print(int i);

int main(void)
{
    int arr[5] = {1 , 2, 3, 4, 5};

    iter(arr, 5, print);
}

void print(int i)
{
    std::cout << i
              << std::endl;
}
