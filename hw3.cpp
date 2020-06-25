#include <iostream>
using namespace std;

int main() 
{
	int i, j, tem;
	const int n = 10;
	int num[n];
	cout << "Please input ten number:\n";
		cin >> num[n];
	
	cout << "The input number is:\n";
	for ( i = 0; i < 10; i++)
	{
		cout<< num[i]<<" ";
	}
	for ( i = 0; i < 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (num[i] > num[j])
			{
				tem = num[i];
				num[i] = num[j];
				num[j] = tem;
			}
		}
	}
	cout << "\nSort from small to large:\n";
	for (i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
	cout << "\nSort from large to small:\n";
	for (i = 9; i >= 0; i--)
	{
		cout << num[i] << " ";
	}

	system("pause");
	return 0;
}