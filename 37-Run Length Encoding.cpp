#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);


    int freq[256] = {0};
    int uniquecount = 0;


    string sample = "wwwwaaadexxxxxx";
    // output should be a4b3c3
    string un = "";
    string unique="";
    for(char ch : sample){
        freq[ch]++;
    }


    for(int i = 0; i < sample.length(); i++){
        char ch = sample[i];
        bool isal = false;
        for(int j = 0; j < unique.length(); j++){
            if(unique[j] == ch){
                isal = true;
                break;
            }
        }

        if(!isal){
            unique+=ch;
        }
    }


    string result = "";

    for(int i = 0; i < unique.length(); i++){
        char ch = unique[i];
        result+=ch;
        result+=to_string(freq[ch]);
    }



    cout << "The unique string is: " << result << endl;



    
    return 0;
}