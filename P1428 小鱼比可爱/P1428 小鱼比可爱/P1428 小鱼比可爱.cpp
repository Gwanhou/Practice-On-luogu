#include<iostream>

using namespace std;

int main(){
	int input[100];
	int n = 0, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}
	int output[100];
	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int j = 0; j < i; j++)
		{
			if (input[j] < input[i]){
				count++;
			}
		}
		cout << count << " ";
	}
}