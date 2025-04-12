#include <iostream>
#include<vector>
using namespace std;

vector<int> countit(string s){

    int stop = ' ';
    int charcount = 0;
    vector<int> collection;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != stop){
            charcount++;
        }
        else{
            if(charcount > 0){
                collection.push_back(charcount);
                charcount = 0;
            }
        }
    }

    if(charcount > 0){
        collection.push_back(charcount);
    }

    return collection;
}

int main() {
    

    string sample = "Ali Hassan Waris";

    vector<int> result = countit(sample);

    for(auto num : result){
        std::cout << num << " ";
    }
    cout << endl;
    return 0;
}