
#include <iostream>

template <typename T>
T max(T a, T b)
{
    if (b < a) // если 1 больше 2го возвращает 1ый
    {
        std::cout << "a" << std::endl;
        return a;
    }
    else // иначе возвращает б 
    {
        std::cout << "b" << std::endl;
        return b;
    }
    //return(b < a ? a : b);
}
template <typename T>
auto min(T a, T b)
{
    if (b > a) // если 1 больше 2го возвращает 1ый
    {
        std::cout << "a" << std::endl;
        return a;
    }
    else // иначе возвращает б 
    {
        std::cout << "b" << std::endl;
        return b;
    }
    //return(b < a ? a : b);
}


template <typename T>
void swap(T& a, T& b)
{
    T t = a;
    a = b;
    b = t;
}


int main()
{
    //std::cout << "Hello World!\n";
    int a = 12;
    int b = 22;
    double c = 2.2;
    double f = 5.5;
    std::cout << "max is " << max(a, b) << std::endl;

    //std::cout << max(f, c) << std::endl;
    std::cout <<"min is " << min(a, b) << std::endl;

    swap(a, b);
    std::cout << "a = " << a << "\t b = " << b << std::endl;

}

