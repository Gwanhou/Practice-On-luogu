#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int totalAmount, admitAmount;
    cin >> totalAmount >> admitAmount;
    long long int id_grade[7000][3];

    //获取成绩
    for (int i = 0; i < totalAmount; ++i) {
        cin >> id_grade[i][0] >> id_grade[i][1];
    }

    //依照分数由高到低排序
    bool changed = true;
    int temp;
    do {
        changed = false;
        for (int j = 0; j < totalAmount; j++)
            if (id_grade[j][1] < id_grade[j + 1][1]) {
                temp = id_grade[j][1];
                id_grade[j][1] = id_grade[j + 1][1];
                id_grade[j + 1][1] = temp;
                temp = id_grade[j][0];
                id_grade[j][0] = id_grade[j + 1][0];
                id_grade[j + 1][0] = temp;

                changed = true;
            }
    } while (changed);

    //将相同分数的按照考号排序
    int m=0;
    do {
        for (int i = 0; i < totalAmount - 1; ++i) {
            //changed = false;
            if (id_grade[i][1] == id_grade[i + 1][1]) {
                if (id_grade[i][0] > id_grade[i + 1][0]) {
                    temp = id_grade[i][0];
                    id_grade[i][0] = id_grade[i + 1][0];
                    id_grade[i + 1][0] = temp;
                    //changed = true;
                }
            }
        }
        m++;
    } while (m<=totalAmount);

    //测试是否排序成功#1
//    cout << endl;
//    for (int i = 0; i < totalAmount; ++i) {
//        cout << id_grade[i][0] << " " << id_grade[i][1] << endl;
//    }
//    cout<<endl;

    //划定分数
    int peopleAmount_basic = floor(admitAmount * 1.5);
    int markLine;
    for (int i = 0; i < peopleAmount_basic; ++i) {
        markLine = id_grade[i][1];
    }
    cout << markLine << " ";

    //划定人数
    int peopleAmount = peopleAmount_basic;
    for (int j = peopleAmount_basic; j < totalAmount; ++j) {
        if (id_grade[j][1] == id_grade[peopleAmount_basic - 1][1]) {
            peopleAmount++;
        }
        if (id_grade[j][1] != id_grade[peopleAmount_basic - 1][1])
            break;
    }
    cout << peopleAmount << endl;

    //输出最终名单
    for (int i = 0; i < peopleAmount_basic; ++i) {
        cout << id_grade[i][0] << " " << id_grade[i][1] << endl;
    }

    for (int j = peopleAmount_basic; j < totalAmount; ++j) {
        if (id_grade[j][1] == id_grade[peopleAmount_basic - 1][1]) {
            cout << id_grade[j][0] << " " << id_grade[j][1] << endl;
        }
        if (id_grade[j][1] != id_grade[peopleAmount_basic - 1][1])
            break;
    }
    return 0;
}