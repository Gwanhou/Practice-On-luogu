#include<iostream>

using namespace std;

int main(){
	int input[100];
	int temp, n = 0;
	while (true)
	{
		cin >> temp;
		if (temp == 0)
			break;
		else
		{
			input[n] = temp;
			n++;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << input[i] << " ";
	}
}