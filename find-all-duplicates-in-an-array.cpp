class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int i,index;

        for(i=0;i<nums.size();i++){
            index=abs(nums[i])-1;
            if(nums[index]<0){
                res.push_back(abs(nums[i]));
            }
            nums[index]=-nums[index];
        }
        return res;
    }
};
