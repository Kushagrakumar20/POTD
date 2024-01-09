//TC --> n^2
//we are finding the first value in the array from the beginning through which we can reach to the last index,
//and once we find it we change the counter variable from the last index to the current index and continue this process untill the
// first value of array becomes greater the j
class Solution {
public:
    int jump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int count = 0;
        int size = nums.size();
        int j = size-1;

        if(nums.size() == 1) return 0;

        while(nums[0] < j){
            
            for(int i=0; i<j; i++){
                if(i + nums[i] >= j){
                    count++;
                    j = i;
                    // cout<<size;
                    break;
                }
            }
        }
        count++;
        return count;
    }
}; 

//TC --> O(N)
//we start from the beginning till size-1 and for every element we find the farthest place where it can took us and 
//till there we find the largest value through which we can further proceed the next largest


class Solution {
public:
    int jump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int count = 0;
        int far = 0;
        int curr = 0;
        for(int i=0; i<nums.size()-1; i++){
            far =max( far,i + nums[i]);
            if(i ==curr){
                count++;
                
                curr = far;
            }
        }

        return count;
    }
}; 