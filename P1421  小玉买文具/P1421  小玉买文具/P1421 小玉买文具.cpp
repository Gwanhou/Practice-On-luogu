#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a, b, amount;
	double money, unitPrice = 1.9;
	cin >> a >> b;
	money = a + 0.1*b;
	amount = money / unitPrice;
	cout << amount;
	system("pause");
	return 0;
}