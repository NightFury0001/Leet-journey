class Solution {
public:
    int firstposition(vector<int>&nums,int target){
        int low=0,high=nums.size()-1;
        int first_occurence=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first_occurence=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first_occurence;

    }
    int lastposition(vector<int>&nums,int target){
        int low=0,high=nums.size()-1;
        int last_occurence=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last_occurence=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return last_occurence;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_index=firstposition(nums,target);
        int last_index=lastposition(nums,target);
        return {first_index,last_index};
        
    }
};