#include<iostream>

using namespace std;

int main(){
	bool isControl[100][100];
	bool isPratical = false;
	int X = 0, Y = 0, count = 0;
	for (int x = 0; x < 100; x++)
	{
		for (int y = 0; y < 100; y++)
		{
			isControl[x][y] = false;
		}
	}
	int X_B, Y_B;
	cin >> X_B >> Y_B;
	int X_horse, Y_horse;
	cin >> X_horse >> Y_horse;
	isControl[X_horse - 1][Y_horse + 2] = true;
	isControl[X_horse - 1][Y_horse - 2] = true;
	isControl[X_horse - 2][Y_horse + 1] = true;
	isControl[X_horse - 2][Y_horse - 1] = true;
	isControl[X_horse + 1][Y_horse + 2] = true;
	isControl[X_horse + 1][Y_horse - 2] = true;
	isControl[X_horse + 2][Y_horse + 1] = true;
	isControl[X_horse + 2][Y_horse - 1] = true;

	for (int location = 0; location <= Y_horse; location++)
	{
		for (int insertAmount = 0; insertAmount <= X_horse; insertAmount++)
		{
			for (int X = 0, Y = 0; Y <= Y_horse; Y++)
			{
				isPratical = false;
				//测试Y轴移动是否可行
				if (isControl[X][Y] == true)
				{
					isPratical = false;
					break;
				}
				if (isControl[X][Y] == false)
				{
					isPratical = true;
				}
				//测试此处是否有X轴移动并且是否每一步都可行
				if (Y == location){
					for (int move_X = 0; move_X < insertAmount; move_X++)
					{
						if (isControl[X][Y] == true)
						{
							isPratical = false;
							break;
						}
						if (isControl[X][Y] == false)
						{
							isPratical = true;
						}
					}
					X = X + insertAmount;
					if (!isPratical)
						break;
				}
			}
			if (isPratical)
			{
				count++;
			}
		}
	}
	cout << count;
	return 0;
}