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
		cout << "重度肥胖\n";
	}
	else if ( BMI >= 30)
	{
		cout << "中度肥胖\n";
	}
	else if ( BMI >= 27)
	{
		cout << "輕度肥胖\n";
	}
	else if ( BMI >= 24)
	{
		cout << "過重\n";
	}
	else if ( BMI >= 18.5)
	{
		cout << "正常範圍\n";
	}
	else  
	{
		cout << "體重過輕\n";
	}








	system("pause");
	return 0;
}