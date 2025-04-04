#include "Array.hpp"

#define ARR_LEN 5

int main(void)
{
    Array<int> arr;

    std::cout << arr.size()
              << std::endl
              << std::endl;

    arr = Array<int>(ARR_LEN);

    std::cout << arr.size()
              << std::endl
              << std::endl;

    for (int i = 0; i < ARR_LEN; i++)
    {
        arr[i] = i;
    }
    int i = 0;
    try
    {
        while (true)
        {
            std::cout << arr[i]
                      << std::endl;
            i++;
        }
    }
    catch (std::exception& e)
    {
        std::cout << "too far"
                  << std::endl;
    }
}
