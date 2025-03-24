#include <iostream>
using namespace std;

int countofsuchstrings(string str)
{
    int n = str.length();
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }

        }
    }

    return count;
}


int main() {
    

    string test_case = "abcab";

    int result = countofsuchstrings(test_case);

    cout << "The count of such substrings is: " << result << endl;
    
    return 0;
}