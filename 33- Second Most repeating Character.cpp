#include <iostream>
using namespace std;

string secondchar(string& str){
    int freq[256] = {0};


    for(char ch : str){
        freq[(unsigned char)ch]++;
    }

    int max1 = INT8_MIN;
    int max2 = INT8_MIN;

    char res = '\0';
    char res2 = '\0';

    for(int i = 0; i < 256; i++){
        if(freq[i] > max1){
            max2 = max1;
            res2 = res;

            max1 = freq[i];
            res = (char)i;
        }
        else if(freq[i] > max2 && freq[i] != max1){
            max2 = freq[i];
            res2 = (char)i;
        }
    }

    if(res2 != '\0'){
        return string(1,res2);
    }
    else{
        return "No such character";
    }
}

int main() {
    string sample = "aabbbccccdddde";
    string result = secondchar(sample);
    cout << (result != "" ? result : "Sorry") << endl;
    return 0;
}
