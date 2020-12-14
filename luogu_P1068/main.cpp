#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int totalAmount, admitAmount;
    cin >> totalAmount >> admitAmount;
    long long int id_grade[7000][3];

    //��ȡ�ɼ�
    for (int i = 0; i < totalAmount; ++i) {
        cin >> id_grade[i][0] >> id_grade[i][1];
    }

    //���շ����ɸߵ�������
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

    //����ͬ�����İ��տ�������
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

    //�����Ƿ�����ɹ�#1
//    cout << endl;
//    for (int i = 0; i < totalAmount; ++i) {
//        cout << id_grade[i][0] << " " << id_grade[i][1] << endl;
//    }
//    cout<<endl;

    //��������
    int peopleAmount_basic = floor(admitAmount * 1.5);
    int markLine;
    for (int i = 0; i < peopleAmount_basic; ++i) {
        markLine = id_grade[i][1];
    }
    cout << markLine << " ";

    //��������
    int peopleAmount = peopleAmount_basic;
    for (int j = peopleAmount_basic; j < totalAmount; ++j) {
        if (id_grade[j][1] == id_grade[peopleAmount_basic - 1][1]) {
            peopleAmount++;
        }
        if (id_grade[j][1] != id_grade[peopleAmount_basic - 1][1])
            break;
    }
    cout << peopleAmount << endl;

    //�����������
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