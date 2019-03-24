// �˻ʺ������ά������
#include<iostream>
#include<cmath>
using namespace std;

int const maxn = 10001;
int chess[maxn][maxn] = { 0 };//��������
int n;//n�ʺ�
int counter = 0;
//��ӡ
void print()
{
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << chess[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
bool check(int row, int col)
{
	for (int i = 1; i < row; i++)   //�ж���
	{
		if (chess[i][col] == 1)
			return false;
	}
	//�ж����Խ���
	int i = row-1;
	int j = col-1;
	while (true)
	{
		if (chess[i][j] == 1)
		{
			return false;
		}
		i--;
		j--;
		if (i<1 || i>8 || j<1 || j>8)
			break;
	}
	//�жϸ��Խ���
	i = row - 1;
	j = col + 1;
	while (true)
	{
		if (chess[i][j] == 1)
			return false;
		i--;
		j++;
		if (i<1 || i>8 || j<1 || j>8)
			break;
	}
	return true;

}
void queen(int row)
{
	if (row > n)
	{
		print();
		counter++;
	}
	for (int col = 1; col <= 8; col++)
	{
		if (check(row, col))
		{
			chess[row][col] = 1;
			queen(row + 1);
		}
		chess[row][col] = 0;
	}

}
int main()
{
	cout << "����ʺ�����";
	cin >> n;
	queen( 1);
	cout << counter << endl;

	return 0;
}

