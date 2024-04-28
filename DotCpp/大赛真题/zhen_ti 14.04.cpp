#include <iostream>
using namespace std;

int main() {
    string Data;

    cin >> Data;
    int Num = 0;

    for (int i = 0; i < Data.size() - 1; i++) {
        if(Data[i] == Data[i + 1] || Data[i] == '?') {
            Num++;
            i++;
        }
    }

    cout << Num;
    return 0;
}