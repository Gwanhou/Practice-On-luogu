#include <iostream>
using namespace std;
int main() {
    int rowAmount, colAmount, rowExpress, colExpress, pairAmount;
    cin >> rowAmount >> colAmount >> rowExpress >> colExpress >> pairAmount;
    const int SIZE = 500;
    bool studentPair[SIZE][SIZE];//stands for (x,y)
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            studentPair[i][j] = false;
        }
    }
    for (int i = 0; i < pairAmount; ++i) {
        int x_1, y_1, x_2, y_2;
        cin >> x_1 >> y_1 >> x_2 >> y_2;
        studentPair[x_1][y_1] = true;
        studentPair[x_2][y_2] = true;
    }
    int score = 0, max_col_1=0, max_col_2=0, max_row=0;
    int _max = 0;
    for (int row = 0; row < rowAmount; ++row) {
        for (int col_1 = 0; col_1 < colAmount; ++col_1) {
            for (int col_2 = 0; col_2 < colAmount; ++col_2) {
                if (col_2 == col_1)
                    continue;
                score = 0;
                if (studentPair[row][col_1] && studentPair[row][col_1 + 1])
                    score++;
                if (studentPair[row][col_2] && studentPair[row][col_2 + 1])
                    score++;
                if (score > _max) {
                    _max = score;
                    max_col_1 = col_1;
                    max_col_2 = col_2;
                    max_row = row;
                }
            }
        }
    }
    cout << max_row << endl << max_col_1 <<" "<< max_col_2;
}