#include <iostream>
using namespace std;

bool checkyesno(string s){
    int length = s.length();
    
    int mid = length/2;

    string one = "";
    string two = "";

    for(int i = 0; i < mid; i++){
        one += s[i];
    }
    for(int i = (mid % 2 == 0 ? mid : mid + 1); i < length; i++){
        two+=s[i];
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    for(char ch : s){
        freq1[ch-'a']++;
    }
    for(char ch : s){
        freq2[ch-'a']++;
    }

    if(freq1 != freq2){
        return false;
    }

    return true;
}


int main() {
    
    string sample = "rotor";

    bool result = checkyesno(sample);

    cout << "Hello g kese ho saare." << endl;

    cout << (result ? "YES":"NO");

    return 0;
}