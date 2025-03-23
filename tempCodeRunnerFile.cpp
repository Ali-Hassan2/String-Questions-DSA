#include <iostream>
#include<vector>
using namespace std;

vector<int> check(int n, int d)
{
    char target = d + '0';

    vector<int> res;

    for(int i = 0; i <= n; i++)
    {
        string str = to_string(i);

        if(str.find(target) != string::npos)
        {
            res.push_back(i);
        }
    }

    return (res.empty()) ? vector<int>{-1} : res;
}


int main() {

    int number = 20;

    int target = 5;

    vector<int> res = check(number,target);

    for(auto num : res)
    {
        cout << num <<  " ";
    }
    cout << endl;
    
    return 0;
}