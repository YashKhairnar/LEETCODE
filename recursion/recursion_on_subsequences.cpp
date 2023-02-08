#include <iostream>
#include <iterator>
#include <vector>
using namespace std;


//considering the size of input array as 3 [3,1,2]
void print_subsequences(int size, vector<int> &v, int index, int arr[])
{
    if ( index >= size /*size of array*/) 
    {
    
        vector<int> ::iterator ptr;
        for(ptr=v.begin(); ptr<v.end();ptr++)
        {
            cout<<*ptr<<" ";
        }
        if(v.size()==0)
              cout<<"{}"<<" ";
        cout<<endl;

        return ;   
    }
    v.push_back(arr[index]);// picking up the element at index
    print_subsequences(size,v,index+1,arr);
    //the not picking up case
    v.pop_back();
    print_subsequences(size,v,index+1,arr);

}

int main()
{
    int arr[]={3,1,2};
    vector<int> b;
    print_subsequences(3,b,0,arr);
    return 0;

}