#include <iostream>
using namespace std;
int main(){
    char input[6];
    cin>>input;
    char temp;
    temp=input[0];
    input[0]=input[4];
    input[4]=temp;
    temp=input[1];
    input[1]=input[3];
    input[3]=temp;
    cout<<input;
    return 0;
}