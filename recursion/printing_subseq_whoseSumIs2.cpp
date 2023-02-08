#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void subSq_sum_is_k(vector<int> &ds,int size,int index, int arr[], int sum, int k)
{
    if (index==size)
    {
    if (sum == k)
    {
        vector<int>::iterator itr;
        for( itr=ds.begin();itr<ds.end();itr++)
          cout<<*itr<<" ";
        cout<<endl;
    }
    return;
    }
    ds.push_back(arr[index]);
    sum += arr[index];
    subSq_sum_is_k(ds,size, index+1,arr,sum,k);

    //not picking the element
    ds.pop_back();
    sum-=arr[index];
    subSq_sum_is_k(ds,size,index+1,arr,sum,k);

}

int main()
{
    int arr[]={1,2,1,6};
    vector<int> ds;
    subSq_sum_is_k(ds,4,0,arr,0,8);
    return 0;
}