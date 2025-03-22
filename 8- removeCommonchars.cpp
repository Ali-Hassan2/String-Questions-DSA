// Given two strings s1 and s2. Modify both the strings such that all the common characters of s1 and s2 are to be removed and the uncommon characters of s1 and s2 are to be concatenated.
// Note: If all characters are removed print -1.

// Example 1:

// Input:
// s1 = aacdb
// s2 = gafd
// Output: cbgf
// Explanation: The common characters of s1
// and s2 are: a, d. The uncommon characters
// of s1 and s2 are c, b, g and f. Thus the
// modified string with uncommon characters
// concatenated is cbgf.
#include <iostream>
using namespace std;

string removecommon(string& s1, string& s2)
{
    string s3 = "";

    // removing from s1

    for(int i = 0; i < s1.length(); i++)
    {
        bool iscommon = false;

        for(int j = 0; j < s2.length(); j++)
        {
            if(s1[i] == s2[j])
            {
                iscommon = true;
                break;
            }
        }

        if(!iscommon)
        {
            s3 += s1[i];
        }
    }

    // removing from s2

    for(int i = 0; i < s2.length(); i++)
    {
        bool iscommon = false;

        for(int j = 0; j < s1.length(); j++)
        {
            if(s2[i] == s1[j])
            {
                iscommon = true;
                break;
            }
        }
        if(!iscommon)
        {
            s3 += s2[i];
        }
    }

    return s3.empty() ? "-1" : s3;
}
 
int main() {


    string s1 = "ALIHASSAN";
    string s2 = "ALIHArAN";

    string s3 = removecommon(s1,s2);

    cout << s3 << endl;
    

    return 0;
}