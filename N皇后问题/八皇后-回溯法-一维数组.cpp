/* 八皇后问题用一维数组去解决，其中a[i]代表第i行哪一列放置有皇后*/

#include<iostream>
#include<cmath>
using namespace std;

const int maxn = 10001;
int a[maxn] = { -1 };
int n;
int counter = 0;
bool check(int a[], int row)
{
	for (int i = 1; i <row; i++)
	{
		if (a[i] == a[row] || abs(a[i] - a[row]) == abs(i - row))   //检查不同行是否占用了相同的列，正负对角线的是否有东西
			return false;
	}
	return true;
}
void queen(int a[], int row)

{
	if (row > n) //皇后已经放满棋盘，打印出来
	{
		for (int j = 1; j <= 8; j++)
		{
			cout << a[j];
		}
		cout << endl;
		counter++;
	}
	for (int col = 1; col <= n; col++)
	{
		a[row] = col;
		if (check(a,row))
		{
			queen(a, row + 1);
		}

	}
}

int main()
{
	
	cout << "输入皇后的个数:";
	cin >> n;
	queen(a,1);
	cout << counter<<endl;
	return 0;
}