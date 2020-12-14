#include<iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    int length = 1;
    while (true) {
        if (static_cast<int>(num / pow(10, length)) == 0)
            break;
        length++;
    }
    cout<<length<<endl;
int temp;
int y;
    for (int i = 0; i < length; ++i) {
        //截取int数字为个位数
        int temp = num / pow(10,length-i-1);
        if(i==0)
            y=temp;
        if(i>0)
            y = temp - temp / 10 * 10;
        cout << static_cast<char>(y+48)<<endl;
    }
}
//#include<iostream>
//using namespace std;
//int main() {
//    int num;
//    cin>>num;
//    int length = 1;
//    while (true) {
//        if (static_cast<int>(num / pow(10, length)) == 0)
//            break;
//        length++;
//    }
//    int i=2;
//    int y;
//    int temp = num / pow(10,length-i-1);
//    if(i==0)
//        y=temp;
//    if(i>0)
//        y = temp - temp / 10 * 10;
//    cout << y;
//}