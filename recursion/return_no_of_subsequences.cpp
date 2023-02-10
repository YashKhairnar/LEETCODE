#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

// we require no ds as we are not printing the subsequence 
int count(int arr[], int index,int n, int k,int sum)
{
    //base case
    if(index==n)
    {
        if (sum==k)
          return 1;
        else 
          return 0;
    }

    //pick and call
    sum+=arr[index];
    int l = count(arr,index+1,n,k,sum);

    //dont pick that element
    sum-=arr[index];
    int r = count(arr,index+1,n,k,sum);

   //return count to parent node 
   return l+r;
}

int main()
{
    int arr[] = {1,3,5};
    int n = 3; // size of the array
    int k = 4; //required sum

    int c = count(arr,0,3,k,0);
    cout<<c<<" ";
    return 0;
}