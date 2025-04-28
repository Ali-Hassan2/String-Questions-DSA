#include <iostream>
using namespace std;

void same_remove(string& s){

    int len = s.length();
    int j = 0;

    int freq[256] = {0};

    for(int i = 0; i < len; i++){
        char c = s[i];
        if(freq[c] == 0){
            s[j] = c;
            j++;
            freq[c]++;
        }
    }

    s.resize(j);  // to remove unused characters
}


int main() {

    string sample = "zoov";
    same_remove(sample);
    // cout << (result.length() > 0 ? result : "Sorry nothing to show.")
    cout << "The result is: " << sample << endl;
    
    return 0;
}