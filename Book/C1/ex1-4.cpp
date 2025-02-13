# include <iostream>
int main()
{
    std::cout << "Enter 2 numbers: " << std:: endl;
    int n1, n2;
    std::cin >> n1 >> n2;
    std::cout << "The first number is " << n1 << " and the second is " << n2
              << " and the product is " << n1 * n2 << "." << std::endl;
    
    return 0;
}