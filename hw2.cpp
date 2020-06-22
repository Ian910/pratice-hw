#include <iostream>
using namespace std;

int main()
{
	 
	int H,S,i,j;
	cout << "Please input the odd height of the rhombus(3~15):";
	cin >> H;
	while (H != -1)
	{
		if (H <= 15 && H > 1 && H % 2 != 0)
		{
			S = (H - 1) / 2;
			for (i = 1; i <= S; i++)
			{
				for (j = 1; j <= S+1- i; j++)
				{
					cout << " ";
				}
				for (j = 1; j <= 2 * i - 1; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
			for (i =1 ; i <=S+1; i++)
			{
				for (j = 1; j <= i-1; j++)
				{
					cout << " ";
				}
				for (j = 1; j <=H+2-2*i; j++)
				{
					cout << "*";
				}
				cout << endl;				
			}
			cout << "Please input the odd height of the rhombus(3~15):";
			cin >> H;
			
		}
		else

		{
			cout << "You enter the wrong number,please input again!" << endl;
			cin >> H;
		}
		  
		
	}


	system("pause");
	return 0;
}