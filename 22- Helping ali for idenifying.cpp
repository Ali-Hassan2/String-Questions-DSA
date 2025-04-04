// There is a hacker named "Vijay" who has developed a method to check whether an id at some social networking site is fake or real using its username.

// His method includes: if the number of distinct consonent characters in one's user name is odd, then the user is a male, otherwise a female. You are given the string that denotes the user name, please help Vijay to determine the gender of this user by his method. Ignore the vowels.
// Note: The input only contains lowercase English alphabets.

// Example 1 -

// Input
// a = "jpmztf"
// Output:
// SHE!
// Explanation:
// There are 6 distinct consonent characters in "jpmztf".
// These characters are: "j", "p", "m", "z", "t", "f".
// So jpmztf is a female and you should print "SHE!".

#include <iostream>
#include<vector>
using namespace std;

string check(string s){

    vector<char>sample;
    int count = 0;
    int freq[26] = {0};

    for(char ch : s){

        if(freq[ch-'a'] == 0){
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
                count++;
            }
        }
        freq[ch-'a']++;
    }

    return (count % 2 == 0) ? "SHE!" : "HE!";
}


int main() {

    string sample = "jpmztf";
    string result = check(sample);
    cout << "The result is:" << result << endl;
    
    return 0;
}