#include <iostream>
using namespace std;


void printsubstrings(string& str){
    int length = str.length();

    for(int i = 0; i < length; i++){
        for(int j = i + 1; j <= length; j++){
            for(int k = i; k < j; k++){
                cout << str[k];
            }
            cout << endl;

        }
        cout << endl;
    }
}
int main() {
    

    string sample = "alihssanwaris";
    printsubstrings(sample);
    
    return 0;
}