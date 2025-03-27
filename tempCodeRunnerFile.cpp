#include <iostream>
using namespace std;



string replace(string str)
{
    string result = "";
    for(char ch : str)
    {   
        if(ch >= 'a' && ch <= 'z')
        {
            result += ('z' - (ch - 'a'));
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            result += ('Z' - (ch - 'A'));
        }

    }

    return result;
}



int main() {

    string sample = "abc";
    string result = replace(sample);

    cout << "Result is: " << result << endl;
    
    return 0;
}