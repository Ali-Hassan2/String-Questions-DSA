// replace the characters with their reverse as a with z and b with y

#include <iostream>
using namespace std;

char reciprocal(char c)
{
    if(c >= 'A' && c <= 'Z'){
        return 'Z' - (c - 'A');
    }
    else if(c >= 'a' && c <= 'z'){
        return 'z' - (c-'a');
    }
    return c;
}

string reci(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
         s[i] = reciprocal(s[i]);
    }

    return s;
}



int main() {

    string sample = "abc";

    string res = reci(sample);

    cout << "The result is: " << res << endl;
    
    return 0;
}