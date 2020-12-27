#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main(){
	double a, b, c, p;
	cin >> a >> b >> c;
	p = 0.5*(a + b + c);
	double S;
	S = pow(p*(p - a)*(p - b)*(p - c), 0.5);
	//cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(1) << s;
	printf("%.1f", S);
	return 0;
}