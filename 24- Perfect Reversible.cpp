// You are given a string ‘str’, the task is to check that reverses of all possible substrings of ‘str’ are present in ‘str’. If yes then the answer is 1, otherwise, the answer will be 0.

// Example 1:

// Input: n = 2, str = "ab"
// Output: 0
// Explanation: All substrings are "a",
// "b","ab" but reverse of "ab" is not 
// present in str.
// â€‹Example 2:

// Input: n = 3, str = "aba"
// Output: 1
// Explanation: Reverse of all possible 
// substring is present in str.
#include <iostream>
#include<string>
using namespace std;

int yesorno(string s, int n){

    for(int i = 0; i < n; i++){
        for(int j = i+1; j <=n; j++){
            string substring = s.substr(i,j-1);
            string reversed = substring;

            int start = 0;
            int end = reversed.length();
            while(start<=end){
                int temp = reversed[start];
                reversed[start] = reversed[end];
                reversed[end] = temp;
                start++;
                end--;

        if(s.find(reversed) == string::npos){
            return 0; 
        }
            }
        }
    }
    return 1;
}

int main() {
    
    return 0;
}