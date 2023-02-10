#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

bool print_first_subseq(int index,int arr[],int size,int sum, int k, vector<int> &ds)
{
    //base case
    if(index==size)
    {
        //condtition satified 
        if(sum==k)
        {
            vector<int>::iterator itr;
            for(itr=ds.begin();itr<ds.end();itr++)
              cout<<*itr<<" ";
            return true;
        }
        //condition not satisfied
        else
           return false ;
    }
    // pick up and add to sum
    ds.push_back(arr[index]);
    sum+=arr[index];
    if(print_first_subseq(index+1,arr,size,sum,k,ds)==true)
       return true;

    //dont pickup and dont update the sum
    ds.pop_back();
    sum-=arr[index];
    if (print_first_subseq(index+1,arr,size,sum,k,ds)==true)
      return true;

    return false;
}

int main()
{
    int arr[]={3,1,2};
    int size = 3;// size of array or range of index
    int sum = 0;
    int k = 5;  //required sum
    vector<int> v; //ds
    print_first_subseq(0,arr,size,sum,k,v);
    return 0;
}