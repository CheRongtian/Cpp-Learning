# include <iostream>
int main()
{
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than/equal to 10
    while(val <= 10)
    {
        sum += val;     // assign sum + val to sum
        ++val;          // add 1 to val
    }
    std::cout << "The sum of 1 to 10 is: " << sum << std::endl;
    return 0;
}