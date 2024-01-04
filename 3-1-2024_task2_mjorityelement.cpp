////Time complexity --> O(nlogn)
//Space complexity --> O(1)
//sort the array and if there's any majority element is present then it will be present at the nums.size()/2 postion and forward also.



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums.size();
        int k=nums[x/2];
        return k;
    }
};