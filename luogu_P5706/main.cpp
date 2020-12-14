#include <iostream>
using namespace std;
int main(){
    double t,cola_unit;
    int n,cup;
    cin>>t>>n;
    cup=2*n;
    cola_unit=t/n;
    printf("%.3f\n%d",cola_unit,cup);
}