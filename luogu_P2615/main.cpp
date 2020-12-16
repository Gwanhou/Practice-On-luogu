#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int SIZE;

int matrix[1000][1000];

int main() {
    cin>>SIZE;
    int mark_row = 0, mark_col = (SIZE - 1) / 2;
    matrix[mark_row][mark_col] = 1;
    for (int input = 2; input <= SIZE * SIZE; input++)
    {
        if (mark_row == 0 && mark_col != SIZE - 1)
        {
            matrix[SIZE - 1][mark_col + 1] = input;
            mark_row = SIZE - 1;
            mark_col = mark_col + 1;

        }
        else if (mark_col == SIZE - 1 && mark_row != 0)
        {
            matrix[mark_row - 1][0] = input;
            mark_row = mark_row - 1;
            mark_col = 0;

        }
        else if (mark_row == 0 && mark_col == SIZE - 1)
        {
            matrix[mark_row + 1][mark_col] = input;
            mark_row = mark_row + 1;
        }
        else if (mark_row != 0 && mark_col != SIZE - 1)
        {
            if (matrix[mark_row - 1][mark_col + 1] == 0) {
                matrix[mark_row - 1][mark_col + 1] = input;
                mark_row = mark_row - 1;
                mark_col = mark_col + 1;

            }
            else {
                matrix[mark_row + 1][mark_col] = input;
                mark_row = mark_row + 1;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout <<matrix[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}