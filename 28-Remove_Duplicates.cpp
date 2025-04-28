#include <iostream>
using namespace std;


string remove_duplicates(string& s){
    int freq[256] = {0};

    string result = "";

    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(freq[ch] == 0){
            result += ch;
            freq[ch]++;
        }
    }

    return result;
}



int main() {
    string sample = "zoov";
    string result = remove_duplicates(sample);
    cout << (result.length() > 1 ? result : "Sorry nothing to show");
    return 0;
}