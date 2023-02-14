class Solution {
private:
    void find_perm(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int freq[])
    {
        //base case 
        if (ds.size()==nums.size())
        {
           ans.push_back(ds);
           return ;
        }

        // for loop and recursion
        for (int i=0; i<nums.size();i++)
        {
            if(freq[i]!=1)
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                //recurse and pick
                find_perm(nums,ans,ds,freq);

                //while returning back
                freq[i]=0;
                ds.pop_back();
            }
            //when element has already been picked
            //move to next index
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int n=0; n<nums.size();n++) freq[n]=0;
        find_perm(nums,ans,ds,freq);
        return ans;  
    }
};