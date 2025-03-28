#include <iostream>
using namespace std;

string whowin(string str)
{
    string res = "";
    char a = str[0];
    char b = str[1];

    if (a == 'R' && b == 'S' || a == 'S' && b == 'P' || a == 'P' && b == 'R')
    {
        res += 'A';
    }
    else if (b == 'R' && a == 'S' || b == 'S' && a == 'P' || b == 'P' && a == 'R')
    {
        res += 'B';
    }
    else
    {
        res = "DRAW";
    }

    return res;
}

int main()
{

    string samp = "RR";
    string res = whowin(samp);

    cout << "The winner is: " << res << endl;

    return 0;
}