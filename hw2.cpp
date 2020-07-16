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
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
	int i, j, n, s;
	printf("Please input the odd height of the rhombus(3~15):");
	scanf_s("%d", &n);
	while (n != -1)
	{
		if (n <= 15 && n > 1 && n % 2 != 0)
		{
			s = (n - 1) / 2;
			for (i = 1; i <= s; i++)
			{
				for (j = s + 1 - i; j > 0; j--)
				{
					printf(" ");
				}
				for (j = 1; j <= 2 * i - 1; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			for (i = 1; i <= s + 1; i++)
			{
				for (j = 1; j <= i - 1; j++)
				{
					printf(" ");
				}
				for (j = 1; j <= n - 2 * i + 2; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("Please input the odd height of the rhombus(3~15):");
			scanf_s("%d", &n);
		}
		else
		{
			printf("You enter the wrong number,please input again!\n");
			scanf_s("%d", &n);
		}
	}
	system("pause");
	return 0;
}
