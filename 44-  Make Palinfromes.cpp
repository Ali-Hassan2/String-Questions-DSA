#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    string sample [] = {"djfh", "gadt", "hfjd", "tdag"};
    int size = sizeof(sample)/sizeof(string);
    string sam = "";
    bool result = false;
    for(int i = 0; i < size; i++){
        sam += sample[i];
        
    string str = sam;

    int start = 0;
    int end = sam.length()-1;
    while(start <= end){
        char temp = sam[start];
        sam[start] = sam[end];
        sam[end] = temp;
        start++;
        end--;
    }

    if(sam == str) result = true;
    else result = false;
}


    cout << (result ? "Yes " : "No");
    cout << endl;
    return 0;
}