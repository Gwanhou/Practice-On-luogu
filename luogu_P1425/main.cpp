#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;

int main() {
    int n;
    scanf("%d", &n);
    switch(n) {
        case 1: {
            printf("I love Luogu!");
            break;
        }
        case 2: {
            printf("6 4");
            break;
        }
        case 3: {
            printf("3\n12\n2");
            break;
        }
        case 4: {
            printf("166.667");
            break;
        }
        case 5: {
            printf("15");
            break;
        }
        case 6: {
            cout << sqrt(6 * 6 + 9 * 9);
            break;
        }
        case 7: {
            printf("110\n90\n0");
            break;
        }
        case 8: {
            cout << PI * 10 << endl;
            cout << PI * 25 << endl;
            cout << 4 * PI * 125 / 3.0;
            break;
        }
        case 9: {
            printf("22");
            break;
        }
        case 10: {
            printf("9");
            break;
        }
        case 11: {
            cout << 100 / 3.0;
            break;
        }
        case 12: {
            printf("13\nR");
            break;
        }
        case 13: {
            double V1 = 4 * PI * 64 / 3.0, V2 = 4 * PI * 1000 / 3.0;
            cout << (int)pow(V1 + V2, 1 / 3.0);
            break;
        }
        case 14: {
            printf("50");
            break;
        }
    }
    return 0;
}