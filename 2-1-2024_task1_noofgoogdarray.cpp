
//Time complexity --> O(n)
//Space complexity --> O(1)
//created a unordered map where we store the frequency of every element of the array and if the frequency is greater than 1 then
//apply the formula.




class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>1) ans+=(i.second*(i.second-1)) /2;
        }
        return ans;
    }
};