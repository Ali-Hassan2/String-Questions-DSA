#include <iostream>
using namespace std;


bool ispresent(string& str1, string& str2){
    int length1 = str1.length();
    for(int i = 0; i < length1; i++){
        for(int j = i + 1; j <= length1; j++){
            for(int k = i; k < j; k++){
                if(str1[k] == str2[k]){
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
    
    return 0;
}