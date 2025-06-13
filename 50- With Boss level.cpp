#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
for(size_t t;cin>>t;cin.ignore(),t--){
    string sample,patt;getline(cin,sample);getline(cin,patt);
    int iMinIndex=INT32_MAX;char firstCharacter='\0';
    for(size_t i=0; (int)i < sample.length(); ++i)
        for(size_t j=0; (int)j < patt.length();++j)
            if(sample[i]==patt[j]&&static_cast<int>(i)<iMinIndex)
                iMinIndex=static_cast<int>(i),firstCharacter=sample[i];
    cout << "The final charater with the smallest index is: ",firstCharacter!='\0'?cout<<firstCharacter<<'\n':cout<<"$"<<endl;
}
  
    return 0;
}