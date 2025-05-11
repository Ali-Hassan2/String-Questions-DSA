#include <iostream>
using namespace std;


void firstrepeated(string& s){

    int length = s.length();

    int freq[256] = {0};
    int secondindices[256];
    int size = sizeof(secondindices)/sizeof(int);

    for(int i = 0; i < size; i++){
        secondindices[i] = -1;
    }
    for(int i = 0; i < length; i++){
        char ch = s[i]; 
        freq[ch]++;

        if(freq[ch] == 2){
            secondindices[ch] = i;
        }
    }
    int min1 = INT8_MAX;
    char reschar = '\0';
    for(int i = 0; i < size; i++){
        if(secondindices[i] != -1 && secondindices[i] < min1){
            min1 = secondindices[i];
            reschar = char(i);
        }
    }
    for(int i = 0; i < length; i++){
        char ch = s[i];
        if(freq[ch] > 1){
            cout << "The " << ch << " occurs " << freq[ch] << " times." << endl;
        }
    }
    cout << "The minx second index is: " << min1 << endl;
    cout << "The minx char is: " << reschar << endl;
}


int main() {

    string s ="geeksforgeeks";
    firstrepeated(s);   
    return 0;
}