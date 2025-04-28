// A string s is given to represent a positive number. The task is to round str to the nearest multiple of 10.  If you have two multiples equally apart from s, choose the smallest element among them.

// Examples:

// Input: s = "29" 
// Output: 30
// Explanation: Close multiples are 20 and 30, and 30 is the nearest to 29. 
// Input: s = "15"
// Output: 10
// Explanation: 10 and 20 are equally distant multiples from 20. The smallest of the two is 10.
#include <iostream>
using namespace std;

string check_multiple(string& s){
    int number = stoi(s);

    int s1 = (number / 10) * 10; // lower multiple
    int s2 = ((number / 10 ) + 1 ) * 10; // upper multiple
    string result = "";
    if(number - s1 <= s2 - number){
        result = to_string(s1);
    }else{
        result = to_string(s2);
    }

    return result;
}



int main() {

    string sample = "12";

    string result = check_multiple(sample);

    cout << "The result is: " << result << endl;
    
    return 0;
}