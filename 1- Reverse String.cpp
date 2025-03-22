#include <iostream>
#include<string>
using namespace std;


string Reverse(string& s)
{
    int start = 0;
    int end = s.size()-1;

    while(start <= end)
    {
        int temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    return s;
}
int main() {
    
    string str = "Ali Hassan";
    string res = Reverse(str);
    cout << "The reverse string is: " << res << endl;
    return 0;
}