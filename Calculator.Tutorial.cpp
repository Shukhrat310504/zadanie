// Calculator.Tutorial.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include  "stdafx.h"
#include "Calculator.h"
#include <iostream>
using namespace std;
int main()
{
	double x=0.0;
	double y=0.0;
	double result=0.0;
	char oper='+';

	cout<<"Calculator"<<endl<<endl;
	cout<<"Vvedi primer"<<endl;
	Calculator c;
	while(true)
	{
		cin >> x >> oper >> y;
		if (oper=='/'&& y==0)
		{
			cout<<"Eror"<<endl;
			continue;
		}
		else
		{
		result=c.Calculate(x, oper, y);
		}
		cout <<"Otvet="<<result<<endl;
	}
	return 0;
}
