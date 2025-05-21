#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S = "0001010111";

    int count = 0;

    for(int i = 1; i < S.length(); i++){
        if(S[i] == '0' && S[i-1] == '0'){
            S[i] = '1';
            count++;
        }
        else if(S[i] == '1' && S[i-1] == '1'){
            S[i] = '0';
            count++;
        }
    }

    cout << (count > 0 ? count : -1) << endl;
    cout << "The new string is: " << S << endl;
    return 0;
}