#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int size;
    cin >> size;
    char digit[100];
    string result_1;
    string result_2;
    string result_3;
    string result_4;
    for (int i = 0; i < size; ++i) {
        cin >> digit[i];
        switch (digit[i]) {
            case '0':
                result_1 = result_1 + "XXX.";
                result_2 = result_2 + "X.X.";
                result_3 = result_3 + "X.X.";
                result_4 = result_4 + "XXX.";
                break;
            case '1':
                result_1 = result_1 + "..X.";
                result_2 = result_2 + "..X.";
                result_3 = result_3 + "..X.";
                result_4 = result_4 + "..X.";
                break;
            case '2':
                result_1 = result_1 + "XXX.";
                result_2 = result_2 + "..X.";
                result_3 = result_3 + "X...";
                result_4 = result_4 + "XXX.";
                break;
            case '3':
                result_1 = result_1 + "XXX.";
                result_2 = result_2 + "..X.";
                result_3 = result_3 + "..X.";
                result_4 = result_4 + "XXX.";
                break;
            case '4':
                result_1 = result_1 + "X.X.";
                result_2 = result_2 + "X.X.";
                result_3 = result_3 + "..X.";
                result_4 = result_4 + "..X.";
                break;
            case '5':
                result_1 = result_1 + "XXX.";
                result_2 = result_2 + "X...";
                result_3 = result_3 + "..X.";
                result_4 = result_4 + "XXX.";
                break;
            case '6':
                result_1 = result_1 + "XXX.";
                result_2 = result_2 + "X...";
                result_3 = result_3 + "X.X.";
                result_4 = result_4 + "XXX.";
                break;
            case '7':
                result_1 = result_1 + "XXX.";
                result_2 = result_2 + "..X.";
                result_3 = result_3 + "..X.";
                result_4 = result_4 + "..X.";
                break;
            case '8':
                result_1 = result_1 + "XXX.";
                result_2 = result_2 + "X.X.";
                result_3 = result_3 + "X.X.";
                result_4 = result_4 + "XXX.";
                break;
            case '9':
                result_1 = result_1 + "XXX.";
                result_2 = result_2 + "X.X.";
                result_3 = result_3 + "..X.";
                result_4 = result_4 + "XXX.";
                break;
            default:
                break;
        }
    }
    cout << result_1 << endl;
    cout << result_2 << endl;
    cout << result_3 << endl;
    cout << result_4 << endl;
}