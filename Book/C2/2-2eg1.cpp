# include <iostream>
// Program for illustration purpose only: It is bad style for a function
// to use a global variable and also define a local variable with the same name
int reused = 42;            // reused has global scope
int main()
{
    int unique = 0;
    std::cout << reused << " " << unique << std::endl;
    
    int reused = 0;
    std::cout << reused << " " << unique << std::endl;

    std::cout << ::reused << " " << unique << std::endl;
    // Explicitly requests the global reused
    
    return 0;
}