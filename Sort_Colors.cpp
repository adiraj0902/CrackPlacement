class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=nums.size()-1,l=0,i=0,temp;
        
        while(i<=r){
            if(nums[i]==0){
                temp=nums[l];
                nums[l]=nums[i];
                nums[i]=temp;
                l++;
            }
            else if(nums[i]==2){
                temp=nums[i];
                nums[i]=nums[r];
                nums[r]=temp;
                r--;
                i--;
            }
            i++;
        }
    }
};
