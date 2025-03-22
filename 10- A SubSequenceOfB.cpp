// Given two strings A and B, find if A is a subsequence of B.

// Example 1:

// Input:
// A = AXY 
// B = YADXCP
// Output: 0 
// Explanation: A is not a subsequence of B
// as 'Y' appears before 'A'.
 

// Example 2:

// Input:
// A = gksrek
// B = geeksforgeeks
// Output: 1
// Explanation: A is a subsequence of B.


#include <iostream>
using namespace std;


bool isSequence(string& A, string& B)
{
    int i = 0;
    int j = 0;

    while (i < A.length() && j < B.length())
    {
        if(A[i] == B[j])
        {
            i++;
        }
        j++;
    }

    return i == A.length();
}

int main() {

    string a = "gksrek";
    string b = "geeksforgeeks";

    bool result = isSequence(a,b);

    cout << (result ? "Yes" : "No");


    
    return 0;
}