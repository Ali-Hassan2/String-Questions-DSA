#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    

// i will find the substring and then match the string with the patternn

    string sample = "geeksforgeeks";
    string pat = "geek";

    bool found = false;
    
    for(int i = 0; i < sample.length(); i++){
        for(int j = i; j < sample.length(); j++){
            string match = "";
            for(int k = i; k <= j; k++){
                match += sample[k];
            }
            if(match == pat){
                found = true;
                break;
            }
        }
        
        if(found) break;  
    }
    
    if(found){
        cout << "Yes 1" << endl;
    }
    else cout << "No 0" << endl;
    


    return 0;
}