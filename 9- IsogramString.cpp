// Given a string S of lowercase alphabets, check if it is isogram or not. An Isogram is a string in which no letter occurs more than once.

// Example 1:

// Input:
// S = machine
// Output: 1
// Explanation: machine is an isogram
// as no letter has appeared twice. Hence
// we print 1.

#include <iostream>
#include<string>
using namespace std;


long getlength(char* arr)
{
    int cnt = 0;

    for(int i = 0; arr[i] != '\0'; i++)
    {
        cnt++;
    }

    return cnt;
}

bool isIsogram(char* str, long size)
{
    

    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(str[i] == str[j])
            {
                return false;
            }
        }
    }

    return true;
}
int main() {
    
    char word[] = "alihsn";

    long size = getlength(word);

    bool result = isIsogram(word,size);

    cout << (result ? "True" : "False");

    cout << endl;

    return 0;
}