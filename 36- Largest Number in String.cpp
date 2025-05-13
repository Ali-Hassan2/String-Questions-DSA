// // longest number in the string which does not contain any 9


// Given a sentence containing several words and numbers. Find the largest number among them which does not contain 9. If no such number exists, return -1.

// Note: Numbers and words are separated by spaces only. It is guaranteed that there are no leading zeroes in the answer.

// Examples :

// Input: sentence="This is alpha 5057 and 97"
// Output: 5057
// Explanation: 5057 is the only number that does not have a 9.


#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    string sample = "This is alpha 5057 and 97";
    vector<string> strs;
    string num = "";
    int maxi = -1;

    for(int i = 0; i < sample.length(); i++){
        if(sample[i] >= '0' && sample[i] <= '9'){
            num += sample[i];
        }
        else{
            if(num.length() != 0){
                bool hasNine = false;
                for(int o = 0; o <= num.length(); o++){
                    if(num[o] == '9'){
                        hasNine = true;
                        break;
                    }
                }
                if(!hasNine){
                    int number = stoi(num);
                    maxi = max(maxi,number);
                }
                num = "";
            }
        }
        cout << endl;   
    }
    cout << endl;

    if(!num.empty()){
        bool hasNine = false;
        for(int i = 0; i < num.length(); i++){
            if(num[i] == 9){
                hasNine = true;
                break;
            }
        }
        if(!hasNine){
            int number = stoi(num);
            maxi = max(maxi,number);
        }
    }

    cout << maxi << endl;



    return 0;
}