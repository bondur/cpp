﻿//Определить номер квадранта, в котором находится точка с заданными координатами(x, y).
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0) cout << "находятся в 1 квадранте" << "\n";
	else if (x < 0 && y > 0) cout << "находятся в 2 квадранте" << "\n";
	else if (x < 0 && y < 0) cout << "находятся в 3 квадранте" << "\n";
	else if (x > 0 && y < 0) cout << "находятся в 4 квадранте" << "\n";
	else cout << "х или у находятся на оси" << "\n";
}