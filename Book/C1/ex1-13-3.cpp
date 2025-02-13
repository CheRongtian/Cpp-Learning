// rewrite ex1-11.cpp
# include <iostream>
int main()
{
    int a, b, c;
    std::cin >> a >> b;
    if(a > b)
    {
        c = a;
        a = b;
        b = c;
    }
    
    for (;a <= b; ++a)
    {
        std::cout << a << std::endl;
    }
    return 0;
}