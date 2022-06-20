// cppPrata_340.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
//#include<ios> //used to get stream size
//#include<limits> //used to get numeric limits
using namespace std;

void q1(int n5, int j);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Рекурсия
    // Дано натуральное число n 
    // Вывести все числа от 1 до n

    int n1 = 5;

    q1(n1 +1 , 1);




return 0;
}


void q1(int n5, int j)
{

    if (j+1 < n5)
    {
        //cout << n5;
        return;
    }
    else
    {
        q1(n5, j - 1);
        cout  << n5 - j << " ";
    }
}


