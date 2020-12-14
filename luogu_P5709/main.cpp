#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double m,t,s;
    cin>>m>>t>>s;
    cout<<floor(m-(s/t));
    return 0;
}