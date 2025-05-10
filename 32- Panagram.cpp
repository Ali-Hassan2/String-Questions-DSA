//  Check if all letters are present in the sentence or not in 


#include <iostream>
using namespace std;

bool ispanagram(string& str){
    int length = str.length();
    bool allp = true;
    for(char i = 'a'; i <= 'z'; ++i)
    {
        bool found = false;

        for(int j = 0; j < length; j++){
            if(str[j] == i || str[j] == (i-'a'+'A')){
                found = true;
                break;
            }
        }
        if(!found){
            allp = false;
            break;
        }

    }
    return allp;
}


int main() {
    

    string str = "Bawds jog, flick quartz, vex nymph";
    bool result = ispanagram(str);

    cout << (result ? "yes this is panagram" : "No this is not panagram") << endl;
    return 0;
}