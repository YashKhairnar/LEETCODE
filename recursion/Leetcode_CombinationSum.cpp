#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

//candidates is the array of values
//target it the sum value 
void findCombinationSum(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>ds)
{
    
    if (index == arr.size() ) //index pointing towards the last element in vector
    {
        if ( target ==0 )
        {
          ans.push_back(ds);
        }
        return;
    }

    //pick the same element again and stay on same index
    if(target>=arr[index]);
    {
    ds.push_back(arr[index]);
    target -= arr[index]; //subtract from target value
    findCombinationSum(index, target, arr, ans, ds);
    
    //dont pick the element and move to next index
    target +=arr[index]; //regain the substracted value of target
    ds.pop_back(); //move the index
    }
    findCombinationSum(index+1,target,arr,ans,ds);
    return;

}

int main()
{
   vector<vector<int>> CombinationSum(vector<int> &candidates, int target){
    vector<vector<int>> ans;
    vector<int> ds;
    findCombinationSum(0,target,candidates,ans,ds);
    return
   }
}