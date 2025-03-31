#include <iostream>
using namespace std;

long long diff(long long number){

    string bc = to_string(number);
    string ac = "";

    for(char ch : bc)
    {
        if(ch == '6')
            ac += '9';
        else
            ac += ch;
    }

    long long num = stoll(ac);

    long long diff = num - number;

    return diff;
}


int main() {

    long long number = 6;

    long long result = diff(number);

    cout << "The result is: " << result << endl;
    
    return 0;
}