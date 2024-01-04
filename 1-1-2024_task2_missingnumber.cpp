//Time complexity --> O(n)
//Space complexity --> O(1)
//find total sum if every element were present and then find sum of array then subtract it and got the missing number as the difference.


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // first method - by sum of array
        int n=nums.size();
        int total = n * (n+1) / 2;
        int sum=0;
        for(int i:nums){
            sum += i;
        }
        cout<<sum<<" "<<total;
        return total-sum;
    }
};