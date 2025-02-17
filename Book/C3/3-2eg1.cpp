# include <iostream>
# include <string>
using namespace std;

int main()
{
    string s("Hello World!!!");
    // convert s to uppercase
    for (auto &c : s) // for every char in s (note: c is a reference)
        c = toupper(c); // c is a reference, so the assignment changes the char in s
    cout << s << endl;
    return 0;
}