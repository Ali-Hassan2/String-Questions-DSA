// Given a string str, the task is to find the bracket numbers, i.e., for each bracket in str, return i if the bracket is the ith opening or closing bracket to appear in the string. 

//  Examples:

// Input:  str = "(aa(bdc))p(dee)"
// Output: 1 2 2 1 3 3
// Explanation: The highlighted brackets in
// the given string (aa(bdc))p(dee) are
// assigned the numbers as: 1 2 2 1 3 3.
// Input:  str = "(((()("
// Output: 1 2 3 4 4 5
// Explanation: The highlighted brackets in
// the given string (((()( are assigned
// the numbers as: 1 2 3 4 4 5

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

//     string sample = "(((()(";

//     vector<int> values;
//     int curr = 0;
//     for(int i = 0; i < sample.length(); i++){
//         if(sample[i] == '(')
//         {
//             values.push_back(curr+1);
//             curr++;
//         }
//         int current = 0;
//         for(auto numm : values){
//             current = numm;
//         }
//         if(sample[i] == ')'){
//             values.push_back(current);
//         }
//     }
    

//     for(auto val : values){
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// by stack

#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    

    string sample = "(((()(";
    stack<int>a;
    stack<int>b;
    int count = 1;

    for(auto ch : sample){
        if(ch == '('){
            a.push(count);
            b.push(count);
            count++;
        }
        else if(ch == ')'){
            
            if(!b.empty()){
                a.push(b.top());
                b.pop();
            }
        }
    }

    while(!a.empty()){
        cout << a.top() << "";
        a.pop();
    }
    cout << "why" << endl;
    return 0;
}