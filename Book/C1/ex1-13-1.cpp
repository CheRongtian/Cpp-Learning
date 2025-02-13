// rewrite ex1-9.cpp
# include <iostream>
int main()
{
    int sum=0;
    for(int n = 50; n <= 100; ++n)
    {
        sum += n;
    }
    std::cout << "The sum from 50 to 100: " << sum << std::endl;
    return 0;
}