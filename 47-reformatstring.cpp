#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    

    // string sample = "5F3Z-2e-9-w";
    // int k = 4;

    // int count = 0;
    // string word = "";
    // for(int i = 0; i < sample.length(); i++){
    //     char ch = sample[i];
    //     if(ch != '-'){
    //         word += toupper(ch);
    //         count++;
    //     }
    // }

    // int parts = count / k;

    // string result = "";
    // for(int i = 0; i < k; i++){
    //     result += word[i];
    // }
    // result += '-';
    // for(int i = k; i <= word.length(); i++){
    //     result += word[i];
    // }

    // cout << result << endl;

    // int word_count = 0;
    // for(int i = 0; i < result.length(); i++){
    //     if(result[i] == '-'){
    //         word_count ++;
    //     }
    // }

    // word_count = word_count + 1;
    // if(word_count == parts){
    //     return true;
    // }



    // cout << "The words are in the string are: " << count + 1 << endl;
    // return 0;



    string S = "5F3Z-2e-9-";
    int K = 4;
    string clean = "";
    int count = 0;
    for(int i = 0; i < S.length(); i++){
        char ch = S[i];
        if(ch != '-'){
            clean += toupper(ch);
            count++;
        }
    }
    
    string res = "";
    
    int parts = count / K;

        for(int i = 0; i < K-1; i++){
            res += clean[i];
        }
        res += '-';
        
        for(int i = K-1; i < clean.length(); i++){
            res += clean[i];
        }

        cout << res << endl;

        return 0;

    
}