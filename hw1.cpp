#include <iostream>
using namespace std;

int main()
{
	 
	float height,weight, BMI;
	cout << "Please input your height(cm) and weight(kg):";
	cin >> height >> weight;
	height = height / 100;
	BMI = weight / (height * height);
	cout << "BMI=" << BMI<<"\n";
	if (BMI >= 35)
	{
		cout << "���תέD\n";
	}
	else if ( BMI >= 30)
	{
		cout << "���תέD\n";
	}
	else if ( BMI >= 27)
	{
		cout << "���תέD\n";
	}
	else if ( BMI >= 24)
	{
		cout << "�L��\n";
	}
	else if ( BMI >= 18.5)
	{
		cout << "���`�d��\n";
	}
	else  
	{
		cout << "�魫�L��\n";
	}








	system("pause");
	return 0;
}