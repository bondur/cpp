﻿/*Написать программу, вычисляющую стоимость междугороднего разговора в соответствии с таблицей :
Город	    Код	 Цена руб/мин
Владивосток	432	 9,20
Москва	    095	 4,10
Краснодар	861	 2,05
Волгоград	844	 2,50
Входными данными должны являться код города и число минут.
На выходе мы должны иметь сообщение о стоимости минуты и сумме за разговор.*/
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Введите код города:\n";
    cin >> x;
    cout << "Введите количество минут:\n";
    cin >> y;
    switch (x)
    {
    case 432: cout << "Цена руб/мин:9,20\n";
        cout << "Сумма за разговор:" << y * 9.20;
        break;
    case 95: cout << "Цена руб/мин:4,10\n";
        cout << "Сумма за разговор:" << y * 4.10;
        break;
    case 861: cout << "Цена руб/мин:2,05\n";
        cout << "Сумма за разговор:" << y * 2.05;
        break;
    case 844: cout << "Цена руб/мин:2,50\n";
        cout << "Сумма за разговор:" << y * 2.50;
        break;
    }
}
