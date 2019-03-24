
/* 八皇后问题用一维数组去解决，其中a[i]代表第i行哪一列放置有皇后*/#include<iostream>
using namespace std;

bool check_2(int a[], int n)
{//多次被调用，只需一重循环 
	for (int i = 1; i <= n - 1; i++)
	{
		if ((abs(a[i] - a[n]) == n - i) || (a[i] == a[n]))
			return false;
	}
	return true;
}
void backdate(int n)
{
	int count = 0;
	int a[100];

	int k = 1;
	a[1] = 0;
	while (k>0)
	{
		a[k] = a[k] + 1;//对应for循环的1~n
		while ((a[k] <= n) && (!check_2(a, k)))//搜索第k个皇后位置
		{
			a[k] = a[k] + 1;
		}

		if (a[k] <= n)//找到了合理的位置
		{
			if (k == n)
			{//找到一组解
				for (int i = 1; i <= 8; i++)
				{
					cout << a[i];
				}
				cout << endl;
				count++;
			}
			else
			{
				k = k + 1;//继续为第k+1个皇后找到位置，对应下一级for循环 
				a[k] = 0;//下一个皇后一定要从头开始搜索
			}
		}
		else
		{
			k = k - 1;//回溯,对应执行外内层for循环回到更上层 
		}
	}
	cout << count << endl;
}

void main()
{
	backdate(8);
}