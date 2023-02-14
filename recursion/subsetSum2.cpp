/*
class Solution {
public:
    void find_subset(int index,vector<vector<int>> &ans, vector<int> &nums, vector<int> &ds)
    {
        for ( int i = index; i<nums.size(); i++)
        {
            if(i!=index && nums[i]==nums[i-1]) continue; //for next iteration
         
            //picked the element
            ds.push_back(nums[i]);
            find_subset(i+1,ans,nums,ds);

            //not picked
            ds.pop_back();
        }

        ans.push_back(ds);  // to  push all the subset into ans
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        find_subset(0,ans,nums,ds);
        return ans;
    }
};

*/