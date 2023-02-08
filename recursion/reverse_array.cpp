#include <iostream>
using namespace std;
//reverse an array using recursion 
void reverse(int arr[5])
{
   int* l = arr;
   int* r = arr+4;
   if( *l == *r )
   {
    for (int i =0; i<5; i++)
      cout<<arr[i]<<" ";
   }
   else
   {
    int temp = *l;
    *l = *r;
    *r = temp;
    reverse(l++,r--);
   }
}

int main()
{
    int arr[]={1,2,3,4,5};
    reverse(arr);
    return 0;
}
