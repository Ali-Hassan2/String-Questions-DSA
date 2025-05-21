#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    int n = 5;
    int s = 12;
    string str = "";
    string res = "";
    for(int i = 0; i <= 9; i++){
        if(i == 9){
            str += char(i+'0');
            for(int j = 0; j <= 9; j++){
                int num = stoi(str);
                if(num + j == s){
                    res += to_string(num);
                    res += char(j + '0');
                }
            }
        }

    }
    cout << "The result length is: " << res.length() << endl;
    
    while(res.length() < n){
        res += '0';
    }
    cout << "The pair is: " << res << endl;


    return 0;
}