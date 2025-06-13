#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        string str; getline(cin,str);
        string patt; getline(cin,patt);
        int mini = INT32_MAX;
        string res = "";
        char ec = '\0';
        for(size_t i = 0; (int)i < str.length(); i++){
            char character1 = str[i];
            for(size_t j = 0; (int)j < patt.length(); j++){
                char character2 = patt[j];
                if(character1 == character2) {
                    if(i < mini){
                        mini = i;
                        ec = character1;
                    }
                }
            }
        }

        if(ec!='\0') res += ec;

        cout << "The string we got/character is: " << res << endl;
        
    }

    return 0;
}