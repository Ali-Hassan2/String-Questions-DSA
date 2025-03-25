#include <iostream>
using namespace std;

int divisible11(string s)
{
    int evensum = 0;
    int oddsum = 0;

    for(int i = 0; i < s.length(); i++)
    {
        int digit = s[i] - '0';

        if(i % 2 == 0)
            oddsum += digit;
        else
            evensum += digit;
    }

    if(abs(evensum - oddsum) % 11 == 0)
        return 1;
    else
        return 0;

}

int main() {

    string sample = "11";
    int result = divisible11(sample);

    std::cout << "The result is: "  << result <<std::endl;
    
    
    return 0;
}