#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);


    string arr[] = {"ali","hassan","ali"};
    int n = 3;
    string uniquewords[100];
    int uniquecount = 0;
    // output should be 1
    int count = 0;
    int freq[256] = {0};

    for(int i = 0; i < n; i++){
        bool isfound = false;

        for(int j = 0; j < uniquecount; j++){
            string word = arr[i];
            if(word == uniquewords[j]){
                freq[j]++;
                isfound = true;
                break;
            }
        }
        if(!isfound){
            uniquewords[uniquecount] = arr[i];
            freq[uniquecount]=1;
            uniquecount++;
        }
    }

    for(int i = 0; i < uniquecount; i++){
        if(freq[i] == 2){
            count++;
        }
    }

    cout << "The output is: " << count << endl;
    return 0;
}