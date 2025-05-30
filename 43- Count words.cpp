#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    

    string s = "a\nhjpfo";

    string res = "";
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ' && s[i] != '\n'){
            res += s[i];
        }
        else{
            if(!res.empty()){
                cout << "Word is: " << res << endl;
                count++;
                res = "";
            }
        }
    }

    if(!res.empty()){
        cout << res << endl;
        count++;
    }

    cout << "Count is: " << count << endl;
    return 0;
}