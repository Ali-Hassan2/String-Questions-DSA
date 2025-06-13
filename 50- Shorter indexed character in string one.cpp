#include <iostream>
using namespace std;
int main()
{
    string str = "zylx";
    string patt = "zxl";
    int minIndex = INT32_MAX;
    char earliestChar = '\0';
    for (int i = 0; i < str.length(); i++)
    {
        char currentChar = str[i];
        for (int j = 0; j < patt.length(); i++)
        {
            if (currentChar == patt[j])
            {
                if (i < minIndex)
                {
                    minIndex = i;
                    earliestChar = currentChar;
                }
                break;
            }
        }
    }
    if (earliestChar != '\0')
    {
        cout << "The string we got/character is: " << earliestChar << '\n';
    }
    else
    {
        cout << "No matching character found\n";
    }

    return 0;
}
