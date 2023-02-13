#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void sum_of_elements(int N,int arr[],int index, vector<int> &sum, int s)
{
    //base case
    if(index==N)
    {
        sum.push_back(s);
        return;
    }

    //recursive case
    // 1. pick
    sum_of_elements(N,arr,index+1,sum,s+arr[index]);

    //2. dont pick
    sum_of_elements(N,arr,index,sum,s);

}

void subsetSum(vector<int> &sum,int arr[], int N)
{
    sort(sum.begin(),sum.end());
    vector<int> ::iterator itr;
    for(itr=sum.begin(); itr<sum.end();itr++)
      cout<<*itr<<" ";
    cout<<" ";
}

int main()
{
    int arr[]={3,1,2};
    vector<int> sum(3) ;
    sum_of_elements(3,arr,0,sum,0);
    subsetSum(sum,arr,3);
    return 0;
}
