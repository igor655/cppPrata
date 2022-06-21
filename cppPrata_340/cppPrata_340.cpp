// cppPrata_340.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
#include<fstream>
//#include<ios> //used to get stream size
//#include<limits> //used to get numeric limits
using namespace std;

void q1(int n5, int j);

void fun(int i);
void fun2(int i, int k);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // recursion
    // Given a natural number n
    // Print all numbers from 1 to n
    // examples
    // n = 5 --  1 2 3 4 5 
    //n = -5 --  1 0 -1 -2 -3 -4 -5
    // n = 0     1 0

   

    //=============================
    fun(5);
    cout << endl;

    fun2(-5, 1);
    cout << endl;
    fun2(0, 1);


    

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


// recursion for positive numbers 
void fun(int i)
{
    if (i > 0)
    {
        //cout << i-- << " ";
        i--;
        fun(i );
    }
    else return;
    cout << i +1 << " ";

   
   

}

void fun2(int i, int k)
{
    if (k < i)
    {
        return;
    }
    cout << k-- << " ";
    fun2(i, k);
}


