
/* �˻ʺ�������һά����ȥ���������a[i]�����i����һ�з����лʺ�*/#include<iostream>
using namespace std;

bool check_2(int a[], int n)
{//��α����ã�ֻ��һ��ѭ�� 
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
		a[k] = a[k] + 1;//��Ӧforѭ����1~n
		while ((a[k] <= n) && (!check_2(a, k)))//������k���ʺ�λ��
		{
			a[k] = a[k] + 1;
		}

		if (a[k] <= n)//�ҵ��˺����λ��
		{
			if (k == n)
			{//�ҵ�һ���
				for (int i = 1; i <= 8; i++)
				{
					cout << a[i];
				}
				cout << endl;
				count++;
			}
			else
			{
				k = k + 1;//����Ϊ��k+1���ʺ��ҵ�λ�ã���Ӧ��һ��forѭ�� 
				a[k] = 0;//��һ���ʺ�һ��Ҫ��ͷ��ʼ����
			}
		}
		else
		{
			k = k - 1;//����,��Ӧִ�����ڲ�forѭ���ص����ϲ� 
		}
	}
	cout << count << endl;
}

void main()
{
	backdate(8);
}