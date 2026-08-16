class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int result=size;
        for(int i=0;i<size;i++){
            result=result^nums[i]^i;
        }
        return result;
        
    }
};