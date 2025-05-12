#include <iostream>
using namespace std;

int main() {
    
    string sample = "Thisisdemostring";
    // output should be ng;

    int count = 3;
    char ch = 'i';

    int length = sample.length();
    int cnt = 0;
    string remain_string = "";
    for(int i = 0; i < length; i++){

        if(sample[i] == ch){
            cnt++;
            if(cnt == count){
                for(int j = i+1; j < length; j++){
                    remain_string += sample[j];
                }
            }
        }

    }
    cout << "Count of character is: "  << cnt << endl;
    cout << "The remaining substring is: " << remain_string << endl;




    return 0;
}