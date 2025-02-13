# include <iostream>
int main()
{   
    int a = 42;
    int *p = 0;

    // Change the value of the pointer
    std::cout << p << std::endl;
    p = &a; // cannot redefine p here.
    std::cout << p << std::endl;

    // Change the value to which pointer points
    std::cout << a << std::endl;
    *p = 10; 
    std::cout << a << std::endl;

    return 0;
}