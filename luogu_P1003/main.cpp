//#include <iostream>
//
//using namespace std;
//
////定义数组代表个坐标点的覆盖情况
//int condition[10003][10003];//stands for [x][y]
//
//int main(){
//    int x_ld,y_ld,width,height;
//    //获取地毯数量
//    int blanketAmount;
//    cin>>blanketAmount;
//
//    //初始化数组为默认的-1
//    for (int i = 0; i < 10003; ++i) {
//        for (int j = 0; j < 10003; ++j) {
//            condition[i][j]=-1;
//        }
//    }
//    //进行输入、操作
//    for (int i = 0; i < blanketAmount; ++i) {
//        cin>>x_ld>>y_ld>>width>>height;
//        for (int row = x_ld; row < x_ld-height; row--) {
//            for (int col = y_ld; col < y_ld+width; col++) {
//                condition[row][col]=i+1;
//            }
//        }
//    }
//    //输出要求位置的覆盖情况
//    int x_re,y_re;
//    cin>>x_re>>y_re;
//    if (condition[x_re][y_re]==-1)
//        cout<<-1;
//    else
//        cout<<condition[x_re][y_re];
//    return 0;
//}

#include<iostream>
#include<cstdio>
using namespace std;
int condition[10001][10001];
int main()
{
    int n,x,y;
    int b=1;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        for(int ii=1;ii<=4;++ii)
            cin>>condition[i][ii];
    }
    cin>>x>>y;
    for(int q=n;q>=1;--q)
    {
        if((condition[q][1]<=x)&&(condition[q][3]+condition[q][1]>=x)&&(condition[q][2]<=y)&&(condition[q][2]+condition[q][4]>=y))
        {
            cout<<q;
            b=2    ;
        }
        if(b==2)
            break;
        if (q == 1) {
            cout << -1;
            break;
        }
    }
    return 0;
}