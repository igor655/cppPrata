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

    // recursion
    // Given a natural number n
    // Print all numbers from 1 to n

    int n = 3;

    /*if (n == 0)
    {

        cout << "1 " << "0 " << endl;
    }
    else if (n > 0)
    {
        for (size_t i = 1; i <= n; i++)
        {
            cout << i << " " ;

        }
        cout << endl;
    }*/

    q1(n +1 , 1);




return 0;
}


void q1(int n5 , int j)
{
    
   
    if ( n5 > 0)
    {
        for (size_t i = 1; i < n5; i++)
        {
            cout << i << " ";

        }
    }
    

    if (j+1 < n5)
    {
        //cout << n5;
        return;
    }
    else
    {
        q1(n5 , j - 1);
        cout  << n5 - j << " ";
    }

    
}


