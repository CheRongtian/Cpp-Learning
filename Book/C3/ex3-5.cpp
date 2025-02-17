// Write a program to read strings from the standard input, 
// concatenating what is read into one large string. 
// Print the concatenated string. 
// Next, change the program to separate adjacent input strings by a space.

# include <iostream>
# include <string>
using namespace std;

int main()
{
    cout << "Enter something: \n";
    string word, result1, result2;
    while(cin >> word)
    {
        if (!result1.empty())
        {
            result1 += " ";  
        }
        result1 += word;
        result2 += word;
    }
    cout << "Concatenated string with space: " << result1 << endl;
    cout << "Concatenated string without space: " << result2 << endl;
    return 0;
}