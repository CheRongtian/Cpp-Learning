# include <iostream>
# include <string>
using namespace std;

int main()
{
    string a, b;
    cout << "Enter string a here: \n";
    cin >> a;
    cout << "Enter string b here: \n";
    cin >> b;
    
    if (a == b)
    {
        cout << "The 2 strings are the same.\n";
    }
    if (a > b)
    {
        cout << "String a is larger.\n";
    }
    else
    {
        cout << "String b is larger.\n";
    }

    int a_size = a.size();
    int b_size = b.size();

    if (a_size == b_size)
    {
        cout << "The 2 strings are the length.\n";
    }
    if (a_size > b_size)
    {
        cout << "String a is longer.\n";
    }
    else
    {
        cout << "String b is longer.\n";
    }
    return 0;
}