﻿//Для нормального разведения золотых рыбок  необходимо, чтобы на каждую рыбку в аквариуме приходилось не менее 3 - х литров воды.
//По известным объему аквариума и количеству рыбок, в нем содержащихся, определить, является ли аквариум “перенаселенным” или нет, 
//и указать количество рыбок, которых в  случае перенаселенности необходимо поместить в другой аквариум.
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "объем аквариума:  ";
	cin >> x;
	cout << "количество рыбок:  ";
	cin >> y;
	if (y * 3 >= x)
		cout << "перенаселенный, " << (y * 3 - x) / 3 << " рыбок нужно переместить в другой аквариум";
	else
		printf("не перенаселенный");
}