# include <iostream>
int main()
{
    int a,b,c;
    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> a >> b;
    if(a>b)
    {
        c = a;
        a = b;
        b = c;
    }

    while(a<=b)
    {
        std::cout << a << std::endl;
        ++a;
    }
    return 0;
}