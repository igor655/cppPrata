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
void fun2(int i);

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

    fun2(-4);
    cout << endl;
    fun2(0);


    

return 0;
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

// recursion for negative numbers 
void fun2(int i)
{
    
    if (i  <= 1)
    {
    i++;
    fun2(i);
    }
    else return;
   
    cout << i - 1 << " ";
}




//void fun2(int i)
//{
//    if (i <= 1)
//    {
//        i++;
//    }
//    else return;
//    cout << i << " ";
//    fun2(i);
//}


