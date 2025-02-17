// Write a program to read the standard input a line at a time. 
// Modify your program to read a word at a time.

# include <iostream>
# include <string>
using namespace std;

int main()
{
    cout << "Enter a line: " << endl;
    string line;
    while(getline(cin, line))
    {
        if (!line.empty())
        {
            cout << "You entered : " << line << endl;   
        }
    }
    
    cout << "\nNow reading input word by word Press Ctrl+D to stop on Linux/Mac: \n";
    string word;
    while (cin >> word) {
        cout << "You entered: " << word << endl;
    }
    
    return 0;
}