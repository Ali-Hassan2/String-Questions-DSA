#include <iostream>
using namespace std;

string modify(string str)
{
    string result = "";

    for(char ch : str)
    {
        char cha = toupper(ch);

        if(ch == ' ')
        {
            result += '_';
        }
        else
        {
            result+= cha;
        }
    }

    return result;
}

int main() {

    string str = "geeks forgeeks.";

    string result = modify(str);

    cout << "The result is:"  << result << endl;
    
    return 0;
}