/* 
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and using only constant extra space.
*/

// 1. Naive approach 
 int findDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        //sort the array first
        sort(nums.begin(),nums.end());

       //Use the while loop and then compare the (i)th and (i+1)th elements. If they match break the loop and return the ith element 
       // as the repeating element. Else continue the while loop by incrementing the i.
        int i = 0;
        while( i < n && nums[i]!= nums[i+1])
        {
           i++;    
        }
        return nums[i];
    }
