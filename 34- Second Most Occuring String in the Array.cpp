#include <iostream>
using namespace std;

int main()
{

    int max1 = INT32_MIN;
    int max2 = INT32_MIN;

    string arr[] = {"aaa", "bbb", "aaa", "bbb", "ccc", "aaa"};
    int size = sizeof(arr) / sizeof(string);
    string unique[256];
    int freq[256];
    int size2 = sizeof(freq) / sizeof(int);

    string result1 = "";
    string result2 = "";

    int uniquecount = 0;

    for (int i = 0; i < size2; i++)
    {
        freq[i] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        bool found = false;
        for (int j = 0; j < uniquecount; j++)
        {
            if (arr[i] == unique[j])
            {
                freq[j]++;
                found = true;
                break;
            }
        }
        if (!found)
        {
            unique[uniquecount] = arr[i];
            freq[uniquecount] = 1;
            uniquecount++;
        }
    }

    for (int i = 0; i < uniquecount; i++)
    {

        if (freq[i] > max1)
        {
            max2 = max1;
            result2 = result1;
            max1 = freq[i];
            result1 = unique[i];
        }
        else if (freq[i] > max2 && freq[i] != max1)
        {
            max2 = freq[i];
            result2 = unique[i];
        }
    }

    cout << "The second most occuring is: " << result2 << endl;

    return 0;
}