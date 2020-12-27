#include<iostream>
using namespace std;

int main(){
	int n;
	bool isValid = true;
	cin >> n;
	char rectangleBefore[11][11];
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			cin >> rectangleBefore[row][col];
		}
	}

	char rectangleAnswer[11][11];
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			cin >> rectangleAnswer[row][col];
		}
	}

	char rectangleAfter[11][11];
	//90 degree
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			rectangleAfter[col + n - 1][row] = rectangleBefore[row][col];
		}
	}
	//search
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (rectangleAfter[row][col] != rectangleAnswer[row][col]){
				isValid = false;
				break;
			}
		}
		if (!isValid)
			break;
	}
	if (isValid)
		return 1;

	//180 degree
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			rectangleAfter[n-row][col] = rectangleBefore[row][col];
		}
	}
	//search
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (rectangleAfter[row][col] != rectangleAnswer[row][col]){
				isValid = false;
				break;
			}
		}
		if (!isValid)
			break;
	}
	if (isValid)
		return 2;

	//270 degree
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			rectangleAfter[col - n + 1][row] = rectangleBefore[row][col];
		}
	}
	//search
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (rectangleAfter[row][col] != rectangleAnswer[row][col]){
				isValid = false;
				break;
			}
		}
		if (!isValid)
			break;
	}
	if (isValid)
		return 3;

	//reflect
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			rectangleAfter[n-row][col] = rectangleBefore[row][col];
		}
	}
	//search
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (rectangleAfter[row][col] != rectangleAnswer[row][col]){
				isValid = false;
				break;
			}
		}
		if (!isValid)
			break;
	}
	if (isValid)
		return 4;

	//mirror
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			rectangleAfter[row][n-col] = rectangleBefore[row][col];
		}
	}
	//search
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (rectangleAfter[row][col] != rectangleAnswer[row][col]){
				isValid = false;
				break;
			}
		}
		if (!isValid)
			break;
	}
	if (isValid)
		return 5;

	//unchanged
	//search
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (rectangleAfter[row][col] != rectangleAnswer[row][col]){
				isValid = false;
				break;
			}
		}
		if (!isValid)
			break;
	}
	if (isValid)
		return 6;

	//cannot found
	return 7;
}