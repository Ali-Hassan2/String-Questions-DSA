#include<iostream>
using namespace std;

string reverse(string str)
{
    int size = str.length() - 1;

    bool freq[256] = {false};
    string result = "";

    if(str.empty())
    {
        return "";
    }

    for(int i = size; i >= 0; i--)
    {
        char ch = str[i];

        if(ch != ' ' && !freq[ch])
        {
            result += ch;
            freq[ch] = true;
        }
    }

    return result;
}



int main()
{

    string sample = "GEEKS FOR GEEKS";


    string result = reverse(sample);

    cout << "The result is: " << result << endl;


    return 0;
}