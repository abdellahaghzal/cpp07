#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <exception>
# include <iostream>

# define DEBUG true

template <typename t_arr>
class Array
{
    private:
        unsigned int length;
        t_arr *arr;
    public:
        Array() :
        length(0),
        arr(NULL)
        {
            if (DEBUG)
                std::cout << "Array Default Constructor is called"
                          << std::endl;
        }

        Array(unsigned int n) :
        length(n),
        arr(new t_arr[n])
        {
            if (DEBUG)
                std::cout << "Array Assignment Constructor is called"
                          << std::endl;
        }

        Array(const Array& other) :
        length(other.length)
        {
            if (DEBUG)
                std::cout << "Array Copy Constructor is called"
                          << std::endl;
            this->arr = new t_arr[this->length];
            for (unsigned int i = 0; i < this->length; i++)
            {
                this->arr[i] = other.arr[i];
            }
        }

        Array& operator=(const Array& other)
        {
            if (DEBUG)
                std::cout << "Array Assignment Operator is called"
                          << std::endl;
            if (&other != this)
            {
                this->length = other.length;
                this->arr = new t_arr[this->length];
                for (unsigned int i = 0; i < this->length; i++)
                {
                    this->arr[i] = other.arr[i];
                }
            }
            return (*this);
        }

        ~Array()
        {
            if (DEBUG)
                std::cout << "Array Destructor is called"
                          << std::endl;
            delete[] this->arr;
        }

        t_arr& operator[](size_t index)
        {
            if (index >= length)
                throw (std::exception());
            return arr[index];
        }

        int size(void)
        {
            return (length);
        }
};

#endif
