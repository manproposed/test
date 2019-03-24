/* �˻ʺ�������һά����ȥ���������a[i]�����i����һ�з����лʺ�*/

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
		if (a[i] == a[row] || abs(a[i] - a[row]) == abs(i - row))   //��鲻ͬ���Ƿ�ռ������ͬ���У������Խ��ߵ��Ƿ��ж���
			return false;
	}
	return true;
}
void queen(int a[], int row)

{
	if (row > n) //�ʺ��Ѿ��������̣���ӡ����
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
	
	cout << "����ʺ�ĸ���:";
	cin >> n;
	queen(a,1);
	cout << counter<<endl;
	return 0;
}