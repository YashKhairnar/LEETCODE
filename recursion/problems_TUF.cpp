#include <iostream>
using namespace std;


//factorial 
int factorial(int a)
{
    if (a ==1 ) 
     return 1; 
    else 
        return a * factorial(a-1);
}

//print name n times using recursion
void printName(int i, int n, string name)
{
    if(i>n)
     return;
    else
    {
        cout<<name<<endl;
        printName(i+1,n,name);
    }
}


//print linearly from 1 to N
void Linear(int i, int n)
{
    if (i>n)
     return;
    else
    {
        cout<<i<<" ";
        Linear(i+1,n);
    }
}

//print from N->1
void Linear2(int i)
{
    if (i<=0)
     return;
    else
    {
        cout<<i--<<" ";
        Linear2(i);
    }
}

// N->1 without using i--
void fun(int i, int n)
{
    if(i>n)
      return;
    fun(i+1,n);
    cout<<i<<" ";
}



int main()
{
    cout<<factorial(10)<<endl;
    printName(1,4,"Yash");
    //Linear(1,10);
    //Linear2(10);
    fun(1,10);
    return 0;
}