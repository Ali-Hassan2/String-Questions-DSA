#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str = "10212";
    string res = "";
    int min = INT8_MAX;
    bool found = false;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            string sub = "";
            for (int k = i; k <= j; k++)
            {
                sub += str[k];
            }

            if (sub.find('1') != string::npos &&
                sub.find('0') != string::npos &&
                sub.find('2') != string::npos)
            {
                res = sub;

                int length = res.length();
                if (length < min)
                {
                    min = length;
                    found = true;
                }
            }
        }
    }

    cout << (found ? min : -1);

    return 0;
}