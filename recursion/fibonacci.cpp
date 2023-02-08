#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n==0 || n==1)
      return n;
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;
}

int main()
{
    int fib = fibonacci(4);
    cout<<fib<<endl;
    return 0;
}