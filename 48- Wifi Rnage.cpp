#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size = 5;
    int range = 1;
    string str = "10010";

    char covered[100]; 
    for (int i = 0; i < size; i++) {
        covered[i] = '0'; 
    }

    for (int i = 0; i < size; i++) {
        if (str[i] == '1') {
            for (int j = i - range; j <= i + range; j++) {
                if (j >= 0 && j < size) {
                    covered[j] = '1';
                }
            }
        }
    }

    bool result = true;
    for (int i = 0; i < size; i++) {
        if (covered[i] == '0') {
            result = false;
            break;
        }
    }

    cout << (result ? "1" : "0") << endl;

    return 0;
}
