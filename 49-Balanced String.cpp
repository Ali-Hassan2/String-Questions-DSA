#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
        string sample = "0100110101";
        int max_count = 0;
        int cnt1 = 0, cnt2 = 0;

        for (char ch : sample){
            if(ch == '0') cnt1++;
            else cnt2++;

            if(cnt1 == cnt2){
                max_count++;
            }
        }
        cout << "The maximum number of such subhstrings are: "<< max_count << endl;

    
    
    return 0;
}