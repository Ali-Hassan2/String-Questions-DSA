#include <bits/stdc++.h>
using namespace std;

string convertToRoman(int n)
{

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string roman = "";

    for (int i = 0; i < 13; i++)
    {
        while (n >= values[i])
        {
            roman += sym[i];
            n -= values[i];
        }
    }

    return roman;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    while(k--) {
        int n;
        cin >> n;
        string result = convertToRoman(n);
        cout << result << '\n'; // Add newline here
    }

    return 0;
}